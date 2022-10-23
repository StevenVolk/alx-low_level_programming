#include <stdio.h>

/**
 * main - prints the first 50 fibonnachi number, starting with 1 and 2
 *
 * Return: Always 1
 */

int main(void)
{
	int i;
	long int former, current, fibo;

	former = 0;
	current = 1;
	for (i = 0; i < 50; i++)
	{
		fibo = current + former;
		former = current;
		current = fibo;
		printf("%ld", fibo);
		if (i != 49)
			printf(", ");
	}
	printf("\n");
	return (1);
}
