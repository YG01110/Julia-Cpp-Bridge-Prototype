# Julia-C++ FFI Prototype (Apple Silicon)

This repository is a proof-of-concept demonstrating a manual Foreign Function Interface (FFI) between C++17 and Julia, built and tested on macOS (Apple Silicon M4).

## Project Overview
The goal of this project is to demonstrate the complete lifecycle of wrapping a C++ class and calling it from Julia without relying on code generation tools.

It successfully performs the following:
1. Defines a simple C++ class ('Shape').
2. Manually implements the JLCXX_MODULE registration hooks.
3. Uses CMake to dynamically locate Julia/CxxWrap on macOS.
4. Compiles the code into a shared library.
5. Loads the library in Julia and executes a C++ method.

## Verification
Expected Output from test.jl:
Success! Area calculated by C++: 314.0
