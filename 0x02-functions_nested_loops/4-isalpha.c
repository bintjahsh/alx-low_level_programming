#include <stdio.h>
#include "main.h"
/**
 * _isalpha - returns 1 if the alphabet is in lowercase and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
