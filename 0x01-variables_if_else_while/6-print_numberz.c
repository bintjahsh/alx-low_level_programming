#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 from 0
 *
 * Return: 0 if main is successful
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar((number % 10) + '0');
	}

	putchar('\n');
	return (0);
}