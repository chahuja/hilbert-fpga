hilbert-fpga
============

Implementation of 32-point hilbert transform on FPGA (verilog)

fft16.v - implementation of 16 pt fft using lesser multiplications and a few more additions than standard fft
        - floatind point error reduced
fft32.v - uses fft16.v to implement 16 pt fft
hilbert.v uses fft32.v to implement hilbert transform of the complete system


Preliminary analysis
- absolute error in a random signal ~ 10^(-3) when compared to matlab implementatino

Feel free to use, modify or distribute this code. No guarantees on its robustness, it might just crash your system :P
