#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 from 0
 *
 * Return: 0 if main is successful
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}

	putchar('\n');
	return (0);
}
