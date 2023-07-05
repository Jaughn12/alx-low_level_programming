#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings representing the command-line arguments
 *
 * Return: 0 upon successful execution
 */
int main(int argc, char *argv[])
{
	int sum = 0;

	for (int i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}

