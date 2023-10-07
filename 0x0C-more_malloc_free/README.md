# 0x0C. C - More malloc, free

## Description

The project `0x0C-more_malloc_free` builds on the previous project, `0x0B-malloc_free`, by introducing additional functions for dynamic memory allocation and deallocation in C using `malloc`, `free`, and `realloc` functions. These functions provide more advanced capabilities for memory management.

## Files

1. `0-malloc_checked.c`
   - Description: Function that allocates memory using `malloc`. It returns a pointer to the allocated memory or exits with a status of `98` in case of failure.

2. `1-string_nconcat.c`
   - Description: Function that concatenates two strings, but uses at most `n` bytes from the second string. If `n` is greater than or equal to the length of the second string, it concatenates the entire second string.

3. `2-calloc.c`
   - Description: Function that allocates memory for an array using `malloc` and initializes all elements to `0`.

4. `3-array_range.c`
   - Description: Function that creates an array of integers, starting from `min` to `max` (inclusive).

5. `100-realloc.c`
   - Description: Function that reallocates a memory block using `malloc` and `free`. It copies the contents of the old memory block to the new one, up to the minimum of the old and new sizes.

6. `101-mul.c`
   - Description: Program that multiplies two positive numbers. It takes two arguments and prints the result on the standard output.

## Learning Objectives

- Understand and apply advanced memory allocation techniques using `malloc`, `calloc`, and `realloc`.
- Gain proficiency in working with dynamically allocated memory.
- Implement functions and programs that involve complex memory management.

## Requirements

- Allowed editors: vi, vim, emacs.
- All files will be compiled on Ubuntu 20.04 LTS using `gcc`, with specific options (`-Wall -Werror -Wextra -pedantic`).
- All files should end with a new line.
- A `README.md` file at the root of the repo, containing a description of the repository.
- A `README.md` file, at the root of the folder of this project, containing a description of the project.
- Code must follow the specific style guide (e.g., Betty style for C).

## Author

Khalid Elaasry
