# 0x18. C - Dynamic Libraries

## Overview

The "0x18-dynamic_libraries" project explores the creation and usage of dynamic libraries in C programming. Dynamic libraries provide a way to organize and reuse code efficiently, offering flexibility and modularity to the development process.

## Files

1. **0-main.c**
   - Description: A sample C program demonstrating the usage of functions from a dynamic library.

2. **1-create_dynamic_lib.sh**
   - Description: Shell script to create a dynamic library named `libdynamic.so` from a set of source files.

3. **100-operations.so**
   - Description: A dynamic library containing mathematical operations (add, subtract, multiply, divide).

4. **100-tests.py**
   - Description: A Python script to test the functionality of the dynamic library `100-operations.so`.

5. **101-make_me_win.sh**
   - Description: Shell script that injects a shared library to make a program win the [Lotto Millionaire](https://github.com/holbertonschool/0x18.c) jackpot.

6. **README.md**
   - Description: This README file providing an overview of the project and details about each file.

7. **libdynamic.so**
   - Description: The dynamic library created using the `1-create_dynamic_lib.sh` script.

8. **main.h**
   - Description: Header file containing function prototypes for the dynamic library.

## Learning Objectives

- Understand the concept and benefits of dynamic libraries.
- Learn to create dynamic libraries in C.
- Explore the process of linking dynamic libraries during compilation.
- Gain practical experience in using dynamic libraries in C programs.

## Requirements

- All files will be compiled on Ubuntu 20.04 LTS using `gcc` with specific options (`-Wall -Werror -Wextra -pedantic`).
- Follow a specific coding style guide (e.g., Betty style for C).
- Include a `README.md` file at the root of the repository, providing a description of the repository.

## Author

Khalid Elaasry
