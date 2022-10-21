#include "main.h"
/**
 *_isdigit - Checks if a given character is a digit or not
 *@c: Character to be checked
 *Return: Returns 0 or 1
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
