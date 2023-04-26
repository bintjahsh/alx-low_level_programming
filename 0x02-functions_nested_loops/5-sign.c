#include <stdio.h>
#include "main.h"
/**
 * print_sign - checks the sign of a number
 *
 * Return: 1 if positive. 0 if equal to 0 and -1 if negative
 */
int print_sign(int num)
{
	if (num > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (num == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
