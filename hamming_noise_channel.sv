module hamming_noise_channel(
    input logic [15:0] input_message,
    output logic [15:0] output_message,
    output logic changed_one,
    output logic changed_two
);
    int rand_number;
    int rand_number2;

    always_comb begin
        rand_number = $urandom() % 160;
        rand_number2 = $urandom() % 160;

        output_message = input_message;

        changed_one = 1'b0;
        changed_two = 1'b0;

        if(rand_number > 96) begin
            //Do nothing
        end else if (rand_number > 144) begin
            //flip one
            output_message[rand_number % 16] = ~input_message[rand_number % 16];
            changed_one = 1'b1;
        end else begin
            //flip one
            output_message[rand_number % 16] = ~input_message[rand_number % 16];

            if(rand_number2 % 16 == rand_number % 16) begin
                changed_one = 1'b1;
            end else begin
                output_message[rand_number2 % 16] = ~input_message[rand_number2 % 16];
                changed_two = 1'b1;
            end
        end
    end


endmodule