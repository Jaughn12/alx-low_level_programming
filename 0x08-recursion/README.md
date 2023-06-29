# Recursion Functions

This repository contains several C functions implemented using recursion. Each function serves a different purpose and utilizes recursion to achieve its functionality. Below is a brief description of each function:

## 1. `_strlen_recursion`

- Prototype: `int _strlen_recursion(char *s)`
- Description: Calculates the length of a string using recursion. It recursively counts the characters in the string until it reaches the null character ('\0') and returns the count.

## 2. `_puts_recursion`

- Prototype: `void _puts_recursion(char *s)`
- Description: Prints a string followed by a new line using recursion. It recursively prints each character of the string until it reaches the null character ('\0').

## 3. `_print_rev_recursion`

- Prototype: `void _print_rev_recursion(char *s)`
- Description: Prints a string in reverse order using recursion. It recursively prints each character of the string in reverse order.

## 4. `is_palindrome`

- Prototype: `int is_palindrome(char *s)`
- Description: Checks if a string is a palindrome using recursion. It compares the characters from the beginning and end of the string recursively and returns 1 if the string is a palindrome, otherwise returns 0.

## 5. `factorial`

- Prototype: `int factorial(int n)`
- Description: Calculates the factorial of a number using recursion. It recursively multiplies the number by the factorial of the number minus one until it reaches the base case of 0 or 1.

## 6. `_pow_recursion`

- Prototype: `int _pow_recursion(int x, int y)`
- Description: Calculates the power of a number using recursion. It recursively multiplies the base number by itself raised to the power minus one until it reaches the base case of 0 or 1.

## 7. `_sqrt_recursion`

- Prototype: `int _sqrt_recursion(int n)`
- Description: Calculates the square root of a number using recursion. It performs a binary search algorithm, recursively dividing the number into halves and checking if the square of the midpoint matches the original number. It returns the square root if found, otherwise returns -1.

## 8. `is_prime_number`

- Prototype: `int is_prime_number(int n)`
- Description: Checks if a number is prime using recursion. It recursively divides the number by all numbers from 2 to the square root of the number and checks if there is any exact division. It returns 1 if the number is prime, otherwise returns 0.

## 9. `wildcmp`

- Prototype: `int wildcmp(char *s1, char *s2)`
- Description: Compares two strings and checks if they can be considered identical. The second string can contain the special character '*', which can replace any string (including an empty string). The function uses recursion to compare the characters of the strings and the wildcard character. It returns 1 if the strings can be considered identical, otherwise returns 0.

Feel free to explore the code and use these functions as needed.


## Usage

To use these functions:

1. Copy the function(s) you need from the provided code.
2. Include the necessary header file, `main.h`, in your program.
3. Call the function(s) in your code as needed.

Remember to compile and run your program using a C compiler.

Feel free to explore and use these functions in your C programs!

