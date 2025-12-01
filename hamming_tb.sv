module hamming_tb;
    logic [10:0] input_message;
    logic [10:0] output_message;
    logic [15:0] encoder_to_noise;
    logic [15:0] noise_to_decoder;

    logic one_error_given;
    logic one_error_detected;
    logic two_errors_given;
    logic two_errors_detected;

    hamming_encoder dut_encoder(input_message, encoder_to_noise);
    hamming_noise_channel noise_channel(encoder_to_noise,noise_to_decoder,one_error_given,two_errors_given);
    hamming_decoder dut_decoder(noise_to_decoder,output_message,one_error_detected,two_errors_detected);

    initial begin
    $dumpfile("waveform_hamming.vcd");
    $dumpvars(0,hamming_decoder_tb);
    end

    initial begin
        int i;
        logic [31:0] message;

        for(i = 0; i < 10; i++) begin
            message = $urandom();
            input_message = message [10:0];
            #10;
        end
        $finish;
    end
endmodule