#include "main.h"

/**
 * _strlen_recursion - prints the length of a string.
 * @s: the string whose length is printed.
 *
 * return: length of the string passed into function.
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}

	return (length);
}
