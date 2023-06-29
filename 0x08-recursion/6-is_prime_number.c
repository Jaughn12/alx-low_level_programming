#include "main.h"

/**
 * _prime_rec - Helper function to check if a number is prime recursively
 * @x: The number to check for primality
 * @y: The divisor to check
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int _prime_rec(int x, int y)
{
	if (x <= 1)
	{
		return (0);
	}
	else if (y == 1)
	{
		return (1);
	}
	else if (x % y == 0)
	{
		return (0);
	}
	else
	{
		return (_prime_rec(x, y - 1));
	}
}

/**
 * is_prime_number - Checks if a number is prime
 * @n: The number to check
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (_prime_rec(n, n - 1));
}

