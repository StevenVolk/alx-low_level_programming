#include <std.io>
#include "main.h"

/**
 * print_array - print a number of elements
 * @a: array
 * @n: number of elements to be printed
 */

void print_array(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		_putchar(a[i] + '0');
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
