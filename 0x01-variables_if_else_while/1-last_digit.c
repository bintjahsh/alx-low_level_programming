#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - prints the last digit of the input and tells us if its greater than 5
 *
 * Return: 0 if main is successful
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int lst_dig = n % 10;
	if (lst_dig > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lst_dig);
	}
	else if (lst_dig < 6 && lst_dig != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lst_dig);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, lst_dig);
	}

	return (0);
}
