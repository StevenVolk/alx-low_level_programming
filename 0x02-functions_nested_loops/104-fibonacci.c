#include <stdio.h>

/**
 * main - prints first 98 fibonnaci numbers
 *
 * Return: Always 0
 */

int main(void)
{
	int i;
	double dd, previous, present, future;

	previous = 0;
	present = 1;
	dd = 5527939700884757 + 8944394323791464;
	printf("%f", dd);
	for (i = 0; i < 98; i++)
	{
		future = previous + present;
		previous = present;
		present = future;
		printf("%.0f", future);
		if (i != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
