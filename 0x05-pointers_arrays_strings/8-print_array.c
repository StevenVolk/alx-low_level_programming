#include <stdio.h>
#include "main.h"

/**
 * print_array - print a number of elements
 * @a: array
 * @n: number of elements to be printed
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
		{
			_putchar(a[i] + '0');
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			_putchar(a[i] + '0');
		}
	}
	_putchar('\n');
}
