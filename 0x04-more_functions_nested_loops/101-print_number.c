#include "main.h"

/**
 * print_number - print numbers with only _putchar
 *
 * @n: number to be printed
 */

void print_number(int n)
{
	int i, j, k;

	if (n > 0)
	{
		i, j = n;
	}
	else if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		i, j = n * -1;
		_putchar('-');
	}
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
	_putchar('\n');
}
