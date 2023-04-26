#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowercase followed by a new line
 *
 * Return: 0 if main is successful
 */
void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		_putchar(alph);

	_putchar('\n');
}
