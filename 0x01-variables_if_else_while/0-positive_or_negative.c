#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - check positive, zero or negative
 *
 * Description: checking a number is positive, zero or negative
 * Return: returns zero
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}

	return (0);
}
