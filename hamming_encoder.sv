
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
        message_index = 0;
        hamming_message_index = 0;
        //insert message
        for(hamming_message_index = 0; hamming_message_index < 16; hamming_message_index++) begin
            if (!((hamming_message_index == parity_pos[0])||
            (hamming_message_index == parity_pos[1])||
            (hamming_message_index == parity_pos[2])||
            (hamming_message_index == parity_pos[3])||
            (hamming_message_index == parity_pos[4]))) begin // if it is not a parity bit, read (note "!(hamming_message_index inside {parity_pos})" is not supported in verilator)
                //insert message bit into proper place
                hamming_message[hamming_message_index] = message[message_index];
                message_index++;
            end
    
        end

        //calculate parity bits
        hamming_message[1] = ^(hamming_message & parity1_mask);
        hamming_message[2] = ^(hamming_message & parity2_mask);
        hamming_message[4] = ^(hamming_message & parity3_mask);
        hamming_message[8] = ^(hamming_message & parity4_mask);
        hamming_message[0] = ^(hamming_message[15:1]);
    end
endmodule