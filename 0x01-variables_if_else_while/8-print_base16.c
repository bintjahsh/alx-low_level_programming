#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 from 0
 *
 * Return: 0 if main is successful
 */
int main(void)
{
	int number;
	char ch;

	for (number = 0; number < 10; number++)
	{
		putchar((number % 10) + '0');
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');
	return (0);
}
