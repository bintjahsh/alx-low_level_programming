#include "main.h"

/**
 * factorial - prints the factorial of number.
 * @n: the number whose factorial is calculated.
 *
 * Return: -1 if n < 0.
 *         factorial of n if n > 0.
 */
int factorial(int n)
{
	
	if (n < 0)
	{
		return -1;
	}
	else if (n == 0)
	{
		return 1;
	}

	return (n * factorial(n - 1));
}
