#include "main.h"

/**
 * print_square - print a square of a number
 *
 * @size: size of square
 */

void print_square(int size)
{
	int i;
	int j;
	
	if (size <= 0)
		_putchar('\n');

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
