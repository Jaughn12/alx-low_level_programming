#include "main.h"
#include <stdio.h>
/**
 * main - Calls fizz_buzz
 * Return:  0
 */
int main(void)
{
	void fizz_buzz(void);
	fizz_buzz();
	return (0);
}
/**
 * fizz_buzz - Prints 1-100
 * Return: void
 */
void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
}
