#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - check last number greater than 5
 *
 * Return: return zero
 */

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	float f;
	f = n % 10;

	if (f > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, f);
	}
	else if (f < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, f);
	}
	else
	{
		printf("Last digit of %d is 0 and is 0", n);
	}
	return (0);
}
