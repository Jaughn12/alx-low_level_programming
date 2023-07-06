#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the arguments
 *
 * Return: 0 if successful, 1 if an error occurred
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	int sum = 0;
	int i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < strlen(argv[i]); j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("%s\n", "Error");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}

