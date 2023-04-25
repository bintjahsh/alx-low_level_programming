#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 *
 * Return: 0 if main is successful
 */
int main(void)
{
	char start = 'a';
	char end = 'z';
	char ch = start;

	while (ch <= end)
	{
	putchar(ch);
	ch++;
	}

	putchar('\n');
	return (0);
}
