#include <stdio.h>
#include "main.h"
/**
 * _islower - prints 1 if the character is in lowercase and 0 otherwise
 *
 * Return: 0 if main is successful
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
