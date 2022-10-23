#include "main.h"

/**
 * print_triangle - prints a right angle triangle with 90 degree to the left
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			k = size - i - 1;
			if (j < k)
				_putchar(' ');
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
