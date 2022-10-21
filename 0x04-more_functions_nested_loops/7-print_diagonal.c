#include "main.h"
/**
 * print_diagonal - Prints a diagonal pattern of int given
 * @n: Number of occurence
 *Return: void
 */
void print_diagonal(int n)
{
	int i;

	int a;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			for (a = 0; a <= i; a++)
			{
				_putchar(' ');
				if (a == i + 1)
				{
					_putchar('\\');
					_putchar('\n');
				}
			}
	}
}
