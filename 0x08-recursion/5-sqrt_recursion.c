#include "main.h"

/**
 * sqrt_help - Helper function to recursively calculate the square root
 * @n: The number to calculate the square root of
 * @start: The starting value of the range to search for the square root
 * @end: The ending value of the range to search for the square root
 *
 * Return: The natural square root of the number, or -1 if not found
 */
int sqrt_help(int n, int start, int end)
{
	int mid;

	if (start <= end)
	{
		mid = (start + end) / 2;
		int square = mid * mid;

		if (square == n)
		{
			return (mid);
		}
		else if (square > n)
		{
			return (sqrt_help(n, start, mid - 1));
		}
		else
		{
			return (sqrt_help(n, mid + 1, end));
		}
	}

	return (-1);
}

/**
 * _sqrt_recursion - Calculates the natural square root of a number
 * @n: The number to calculate the square root of
 *
 * Return: The natural square root of the number, or -1 if not found
 */
int _sqrt_recursion(int n)
{
	return (sqrt_help(n, 0, n));
}

