#include "main.h"
/**
 *print_line - Prints n lines '_'
 *@n : Number of lines to be printed
 *Return: void
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('_');
		}
		putchar('\n');
	}
}
