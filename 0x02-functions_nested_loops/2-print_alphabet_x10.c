#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet in lowercase followed by a new line
 *
 * Return: 0 if main is successful
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char alph;

	while (i++ <= 9)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
			_putchar(alph);
		_putchar('\n');
	}
}
