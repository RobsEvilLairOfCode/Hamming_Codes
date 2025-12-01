# Hamming Encoder/Decoder in SystemVerilog

This project presents a SystemVerilog implemenation of a Hamming Encoder and Hamming Decoder, used for error correction. The encoder encodes an 11-bit message into a 16-bit Hamming message with 5 parity bits. These bit are use identify the validity of the message in the case that a bit is flipped while being sent through a noisy channel. If only one flipped bit, the Hamming Decoder is able to use the parity bits to identify the incorrect bit, and correct it before outputting the message. If there are two errors, the decoder signifies that the message is not trustworthy.

## Key features
* Synthesizable Hamming Encoder/Decoder
* Noisy channel simulation module
* Randomized testing

## Notable files:
* hamming_encoder.sv: The encoder module
* hamming_decoder.sv: The decoder module
* hamming_noise_channel.sv: A module to simulating randomized channel noise
* hamming_tb.sv: Testbench file

## Requirements
* Linux / WSL2
* Verilator
* GTKWave

## Run testbench
```bash
verilator --timing --trace --build --Wno-WIDTHEXPAND --cc ./hamming_tb.sv ./hamming_decoder.sv ./hamming_encoder.sv ./hamming_noise_channel.sv --exe ./sim_main.cpp
```