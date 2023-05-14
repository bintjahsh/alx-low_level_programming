#include <stdio.h>

/**
 * main - prints the number of arguments passed to it.
 * @argc: The number of arguments passed to the program.
 * @argv: an array of pointers to the arguments.
 *
 * return: 0 if main is successful.
 */
int main (int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
