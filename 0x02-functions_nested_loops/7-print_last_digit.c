#include "main.h"
/**
 *print_last_digit - Prints the last digit of an integer
 *@n: Parameter to check last digit
 *Return: last digit of n
 */
int print_last_digit(int n)
{
	if (n >= 0)
	{
		int c;

		c = n % 10;
		_putchar(c + '0');
		return (c);
	}
	else if (n == -2147483648)
	{
		_putchar('8');
		return (8);
	}
	else
	{
		int  d;

		d = ((-1 * n) % 10);
		_putchar(d + '0');
		return (d);
	}
}
