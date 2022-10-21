#include <stdio.h>

/**
 * main - prints first 98 fibonnaci numbers
 *
 * Return: Always 0
 */

int main(void)
{
	int i;
	double previous, present, future;

	previous = 0;
	present = 1;
	for (i = 0; i < 80; i++)
	{
		future = previous + present;
		previous = present;
		present = future;
		printf("%.0f", future);
		if (i != 79)
			printf(", ");
	}
	printf("\n");
	return (0);
}
