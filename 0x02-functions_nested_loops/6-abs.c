#include "main.h"
/**
 *_abs - computes absolute value of c
 *@c: parameter for computation
 *Return: abs(c)
 */
int _abs(int c)
{
	if (c >= 0)
	{
		return (c);
	}
	else
	{
		return (-1 * c);
	}
}
