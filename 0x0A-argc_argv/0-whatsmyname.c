#include <stdio.h>

/**
* main - prints the name of the program
* @argc: the number of arguments passed to the program.
* @argv: an array of pointers to the arguments.
*
* return: 0 if main is succesful
*/
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
