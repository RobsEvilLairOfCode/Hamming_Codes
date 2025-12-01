
module hamming_encoder(
    input logic [10:0] message,
    output logic [15:0] hamming_message
);
    localparam logic [15:0] parity1_mask = 16'b1010101010101000;
    localparam logic [15:0] parity2_mask = 16'b1100110011001000;
    localparam logic [15:0] parity3_mask = 16'b1111000011100000;
    localparam logic [15:0] parity4_mask = 16'b1111111000000000;
    
    localparam logic [3:0] parity_pos[5] = '{4'h0,4'h1,4'h2,4'h4,4'h8};
    
    always_comb begin
        int message_index;
        int hamming_message_index;
        hamming_message_index = 0;
        //insert message
        for(message_index = 0; message_index < 11 ; message_index++) begin
            /* verilator lint_off ALWCOMBORDER */
            foreach(parity_pos[i]) begin
                if (hamming_message_index [3:0] == parity_pos[i]) begin // if it is a parity bit, skip
                    hamming_message_index++;
                end
            end

            //insert message bit into proper place
            hamming_message[hamming_message_index] = message[message_index];
            
            //increment
            hamming_message_index++;
            /* verilator lint_on ALWCOMBORDER */
        end

        //calculate parity bits
        hamming_message[1] = ^(hamming_message & parity1_mask);
        hamming_message[2] = ^(hamming_message & parity2_mask);
        hamming_message[4] = ^(hamming_message & parity3_mask);
        hamming_message[8] = ^(hamming_message & parity4_mask);
        hamming_message[0] = ^(hamming_message[15:1]);
    end
endmodule