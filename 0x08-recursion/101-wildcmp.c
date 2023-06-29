#include "main.h"
/**
 * wildcmp - Compares two strings
 * @s1: Pointer to the first string
 * @s2: Pointer to the second string
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
	{
		return (*s1 == '\0');
	}
	else if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}

		while (*s1 != '\0')
		{
			if (wildcmp(s1, s2 + 1))
			{
				return (1);
			}
			s1++;
		}

		return (wildcmp(s1, s2 + 1));
	}
	else if (*s1 != '\0' && (*s1 == *s2))
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	return (0);
}

