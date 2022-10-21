#include <stdio.h>

/**
 * main - prints the first 50 fibonnachi number, starting with 1 and 2
 *
 * Return: Always 1
 */

int main(void)
{
	int i, former, current;

	former = 0;
	current = 1;
	for (i = 0; i < 50; i++)
	{
		current += former;
		printf("%i,", current);
		former = current;
	}
	printf("\n");
}
