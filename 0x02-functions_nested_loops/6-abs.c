#include <stdio.h>
#include "main.h"
/**
 * _abs - checks the absolute value of a number
 *
 * Return: the number if positive, -number if negative
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
