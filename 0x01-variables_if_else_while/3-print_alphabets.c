
#include <stdio.h>
/**
 * main - prints the alphabet in lowercase then uppercase
 *
 * Return: 0 if main is successful
 */
int main(void)
{
	char start = 'a';
	char end = 'z';
	char ch = start;
	char startU = 'A';
	char endU = 'Z';
	char chU = startU

	while (ch <= end)
	{
		putchar(ch);
		ch++;
	}
	while (chU <= endU)
	{
		putchar(chU);
		chU++;
	}

	putchar('\n');
	return (0);
}
