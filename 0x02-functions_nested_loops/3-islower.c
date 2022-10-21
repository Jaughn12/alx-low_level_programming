#include "main.h"
/**
 *_islower- checks fro lower/uppercase
 *Return: 0 or 1
 *@c: integer value(ASCII) of character
 */
int _islower(int c)
{
	if (c >= 94 && c <= 122)
	{
		return (1);
	}
	return (0);
}
