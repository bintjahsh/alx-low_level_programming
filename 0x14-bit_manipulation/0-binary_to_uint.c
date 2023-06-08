#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: 0 if b is NULL or contains chars not 0 or 1.
 *         Otherwise, return converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, multi = 1;
	int lengt;

	if (b == '\0')
		return (0);

	for (lengt = 0; b[lengt];)
		lengt++;

	for (lengt -= 1; lengt >= 0; lengt--)
	{
		if (b[lengt] != '0' && b[lengt] != '1')
			return (0);

		num += (b[lengt] - '0') * multi;
		multi *= 2;
	}

	return (num);
}
