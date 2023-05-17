#include <stdio.h>
#include <stdlib.h>

/**
 * main - Ppints the minimum number of coins to
 *        make change for an amount of money.
 * @argc: the number of arguments supplied to main.
 * @argv: an array of pointers to the arguments.
 *
 * return: -1 if the number of arguments is not exactly one.
 *         0 if main is successful.
 */
int main(int argc, char *argv[])
{
	int cents;
	int coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		coins++;
		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents -= 10;
			continue;
		}
		if ((cents - 5) >= 0)
		{
			cents -= 5;
			continue;
		}
		if ((cents - 2) >= 0)
		{
			cents -= 2;
			continue;
		}
		cents--;
	}

	printf("%d\n", coins);

	return (0);
}
