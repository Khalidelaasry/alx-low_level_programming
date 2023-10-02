# 0x09. C - Static Libraries

## Description

This project introduces the concept of static libraries in C programming. A static library is a collection of object files that are linked with a program at compile time. It allows for the reuse of code across multiple programs, providing a way to organize and distribute commonly used functions.

## Files

1. `libmy.a` - The static library containing various functions.
2. `create_static_lib.sh` - A script for creating the static library.


## Learning Objectives

- What is a static library, how does it work, how to create one, and how to use it.
- Basic usage of `ar`, `ranlib`, `nm`.

## Requirements

### C

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- All your files should end with a new line.
- A `README.md` file at the root of the repo, containing a description of the repository.
- A `README.md` file, at the root of the folder of this project, containing a description of the project.
- There should be no errors and no warnings during compilation.
- You are not allowed to use system.

## Tasks

0. Create the static library `libholberton.a` - Write a script called `create_static_lib.sh` that creates a static library called `libholberton.a` from all the `.c` files in the current directory.

## Author

Khalid Elaasry
