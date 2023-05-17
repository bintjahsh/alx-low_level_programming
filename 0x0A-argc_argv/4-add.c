#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the addition of positive numbers,
 *        followed by a new line.
 * @argc: the number of arguments supplied to main.
 * @argv: an array of pointers to the arguments.
 *
 * return: -1 if one of the numbers contains symbols that are not digits.
 *         0 if main is successful.
 */
int main(int argc, char *argv[])
{
	int num;
	int i;
	int sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (i = 0; argv[num][i]; i++)
		{
			if (argv[num][i] < '0' || argv[num][i] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[num]);
	}

	printf("%d\n", sum);

	return (0);
}
