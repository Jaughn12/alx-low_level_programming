# Code Snippets

This repository contains several code snippets written in C. Each code snippet demonstrates a different concept or functionality. Below is a brief description of each code snippet:

## Code Snippet 1: argv[0] Printing

- File: `0-whatsmyname.c`

This code snippet prints the name of the program itself, which is stored in `argv[0]`.

## Code Snippet 2: Argument Count

- File: `1-args.c`

This code snippet prints the number of command-line arguments passed to the program (`argc`) minus 1.

## Code Snippet 3: Argument Printing

- File: `2-args.c`

This code snippet prints all the command-line arguments passed to the program, one argument per line.

## Code Snippet 4: Argument Multiplication

- File: `3-mul.c`

This code snippet takes two command-line arguments and multiplies them together. If exactly two arguments are provided, it calculates their product and prints the result. Otherwise, it prints an error message.

## Code Snippet 5: Argument Summation

- File: `4-add.c`

This code snippet calculates the sum of all the command-line arguments that are provided as integers. It checks if at least one argument is provided. If no arguments are provided, it prints `0`. If arguments are provided, it converts each argument to an integer and adds it to the sum. Non-numeric arguments are treated as an error.

## Code Snippet 6: Minimum Coin Change

- File: `100-change.c`

This code snippet calculates the minimum number of coins required to make change for a given amount of cents. It expects one command-line argument representing the amount of cents. If the number of arguments is not exactly 1, it prints an error message. If the argument is negative, it prints `0`. Otherwise, it calculates the minimum number of coins using available denominations (25, 10, 5, 2, 1) and prints the result.


