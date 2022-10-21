#include "main.h"
/**
 *_isalpha- checks for lower/uppercase
 *Return: 0 or 1
 *@c: integer value(ASCII) of character
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	return (0);
}
