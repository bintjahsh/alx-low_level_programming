#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * Return: value of the last digit of the number
 */
int print_last_digit(int n)
{
	int lst_dig = n % 10;

	if (lst_dig < 0)
		lst_dig *= -1;

	_putchar(lst_dig + '0');

	return (lst_dig);
}
