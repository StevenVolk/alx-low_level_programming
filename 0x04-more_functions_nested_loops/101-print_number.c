#include "main.h"

/**
 * print_number - print numbers with only _putchar
 * @n: number to be printed
 *
 * Return: Always 0
 */

void print_number(int n)
{
	int i, j, k;

	i, j = n;
	while (i != 0)
	{
		k = 1;
		while (j > 10)
		{
			j /= 10;
			k *= 10;
		}
		_putchar('0' + j);
		i = i % k;
	}
	return (0);
}
