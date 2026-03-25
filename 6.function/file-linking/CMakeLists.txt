# 1. State the minimum version of CMake required
cmake_minimum_required(VERSION 3.10)

# 2. Name your project (this can be anything you want)
project(MathApp)

# 3. Tell CMake to build an executable using your source files
add_executable(my_program main.cpp add.cpp)