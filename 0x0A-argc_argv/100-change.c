#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the arguments
 *
 * Return: 0 if successful, 1 if an error occurred
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("%d\n", 0);
	}
	else
	{
		int coins[] = {25, 10, 5, 2, 1};
		int num_coins = 0;
		int i, remaining;

		for (i = 0; i < sizeof(coins) / sizeof(coins[0]); i++)
		{
			if (cents >= coins[i])
			{
				num_coins += cents / coins[i];
				remaining = cents % coins[i];
				cents = remaining;
			}
		}

		printf("%d\n", num_coins);
	}

	return (0);
}

