module hamming_decoder(
    input logic [15:0] hamming_message,
    output logic [10:0] message,
    output logic one_error,
    output logic two_errors
);

    localparam logic [15:0] parity1_mask = 16'b1010101010101000;
    localparam logic [15:0] parity2_mask = 16'b1100110011001000;
    localparam logic [15:0] parity3_mask = 16'b1111000011100000;
    localparam logic [15:0] parity4_mask = 16'b1111111000000000;
    
    always_comb begin

        logic [15:0] revised_message;//Signal for revising the message
        logic [3:0] error_pos; //Signal for calculating the error position

        logic parity_bit1_check;
        logic parity_bit2_check;
        logic parity_bit3_check;
        logic parity_bit4_check;
        logic [3:0] parity_check_1_bits;
    
        logic parity_check_2;
       
        parity_bit1_check = (hamming_message[1] == ^(hamming_message & parity1_mask)); //Indicates when parity bit indicates correct even/odd count
        parity_bit2_check = (hamming_message[2] == ^(hamming_message & parity2_mask));
        parity_bit3_check = (hamming_message[4] == ^(hamming_message & parity3_mask));
        parity_bit4_check = (hamming_message[8] == ^(hamming_message & parity4_mask));

        parity_check_1_bits = {parity_bit4_check,parity_bit3_check,parity_bit2_check,parity_bit1_check};

        parity_check_2 = (hamming_message[0] == ^(hamming_message[15:1])); //indicates when 0 bit correctly indicates even/odd of other bits 

        
        //default values
        error_pos = 4'h0;
        message = 11'h000;
        one_error = 1'b0;
        two_errors = 1'b0;
        revised_message = hamming_message;

        if(!(&parity_check_1_bits) & !parity_check_2) begin //indicates one error
            //Calculate the location of the error
            error_pos = ({3'b000, (hamming_message[8] != ^(hamming_message & parity4_mask))} << 3) |
                            ({3'b000, (hamming_message[4] != ^(hamming_message & parity3_mask))} << 2) |
                            ({3'b000, (hamming_message[2] != ^(hamming_message & parity2_mask))} << 1) |
                            ({3'b000, (hamming_message[1] != ^(hamming_message & parity1_mask))});

            //Flip the affected bit
            revised_message[error_pos] = ~hamming_message[error_pos];

            //Indicate that there is one error
            one_error = 1'b1;
            two_errors = 1'b0;
            
        end else if (&parity_check_1_bits & !parity_check_2) begin//Error with overall parity bit
            //Flip the affected bit
            revised_message[0] = ~hamming_message[0];
            
            //Indicate that there is one error
            one_error = 1'b1;
            two_errors = 1'b0;
        end else if(!(&parity_check_1_bits) & parity_check_2) begin //Indicates two errors
            //There is nothing to be done with the message since it cannot be trustworthy
            //Just return original message (already default).

            //Indicate that there are two errors
            one_error = 1'b0;
            two_errors = 1'b1;
        end else begin// There are no errors
            //return original message (already default)

            //Indicate that there are no errors
            one_error = 1'b0;
            two_errors = 1'b0;
        end

        //Rebuild message
        message = {revised_message[15:9],revised_message[7:5],revised_message[3]};
    end
endmodule