#include "main.h"
/**
 *_isupper - Checks if a given alphabet is upper or not
 *@c: Alphabet to be checked
 *Return: Returns  0 if it's not upper or 1 if it is.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
