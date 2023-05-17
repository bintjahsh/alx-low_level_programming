#include <stdio.h>

/**
 * main - multiplies two numbers.
 * @argc: number of arguments supplied to main.
 * @argv: an array of arguments supplied to main.
 *
 * return: 1 if main receives less
 * 	   than two arguments.
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc > 2)
	{
		int mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);

		return (0);
	}
	else
		printf("Error");
		
		return (1);
}
