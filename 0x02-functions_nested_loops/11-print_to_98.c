#include "main.h"

/**
 * print_to_98 - print from a number to 98
 * @n: number to print from
 *
 * Return: returns void
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%i, ", n);
		if (n < 98)
			n++;
		else
			n--;
	}
	printf("98\n");
}
