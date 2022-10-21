#include "main.h"
/**
 *print_sign - prints + , - or 0 based on sign
 *@n: parameter to check sign
 *Return: 0 for 0, -1 for negative and 1 for positive
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
