## The Elementrem EVM JIT

EVM JIT is a library for just-in-time compilation of Elementrem EVM code.
It can be used to substitute classic interpreter-like EVM Virtual Machine in Elementrem client.

### Build

### Linux / Ubuntu

1. Install llvm-3.7-dev package
  1. For Ubuntu 14.04 using LLVM deb packages source: http://llvm.org/apt
  2. For Ubuntu 14.10 using Ubuntu packages
2. Build library with cmake
  1. `mkdir build && cd $_`
  2. `cmake .. && make`
3. Install library
  1. `sudo make install`
  2. `sudo ldconfig`
