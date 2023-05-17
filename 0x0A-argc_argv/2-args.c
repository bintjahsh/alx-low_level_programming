#include <stdio.h>
#include "main.h"

/**
 * main - prints al arguments passed to it.
 * @argc: the number of arguments passed to it.
 * @argv: an array of pointer to all the arguments.
 *
 * return: 0 if main is succesful.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0, i < argc, i++)
	{
		printf("%s\n", argv[i]);

		return (0)
	}
}
