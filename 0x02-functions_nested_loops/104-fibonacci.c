#include <stdio.h>

/**
 * main - prints first 98 fibonnaci numbers
 *
 * Return: Always 0
 */

int main(void)
{
	int i;
	unsigned int previous, present, future;

	previous = 0;
	present = 1;
	for (i = 0; i < 98; i++)
	{
		future = previous + present;
		previous = present;
		present = future;
		printf("%d", future);
		if (i != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
