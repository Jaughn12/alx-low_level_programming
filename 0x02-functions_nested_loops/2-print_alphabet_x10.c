#include "main.h"
/**
 *print_alphabet_x10 - Prints lowercase x10
 *Return: void
 */
void print_alphabet_x10(void)
{

	int a;
	char x;

	for (a = 0; a <= 10; a++)
	{
		if (a != 0)
		{
			_putchar('\n');
			if (a == 10)
			{
				break;
			}
		}
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
	}
}
