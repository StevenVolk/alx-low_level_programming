#include <stdio.h>

/**
 * main - finds sum of even valued terms for fibonacci numbers < 4,000,000
 *
 * Return: returns 1
 */

int main(void)
{
	long int previous, present, future, sum;

	previous = 0;
	present = 1;
	future = 1;
	sum = 0;
	while (future < 4000000)
	{
		future = previous + present;
		previous = present;
		present = future;
		if (future % 2 == 0)
			sum += future;
	}
	printf("%ld\n", sum);
	return (1);
}
