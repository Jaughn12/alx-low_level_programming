#include "main.h"
/**
 * print_square - Prints a diagonal pattern of int given
 * @size: Width & Height of square
 * Return: void
 */
void print_square(int size)
{
	int i;

	int a;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (a = 1; a <= size; a++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
