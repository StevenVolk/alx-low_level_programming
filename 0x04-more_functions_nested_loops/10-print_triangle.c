#include "main.h"

/**
 * print_triangle - prints a right angle triangle with 90 degree to the left
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int i, j, k;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			k = size - i;
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
