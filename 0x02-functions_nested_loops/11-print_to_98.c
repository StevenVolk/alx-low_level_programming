#include "main.h"

/**
 * print_to_98 - prints from any number to 98
 * @n: number to print from
 *
 * Return: returns void
 */

void print_to_98(int n)
{
	int i, j, k, l, m;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i < 0)
			{
				m = i * -1;
				_putchar('-');
			}
			else
				m = i;
			if (m < 10)
			{
				_putchar('0' + m);
			}
			else
			{
				j = m / 10;
				k = m % 10;
				_putchar('0' + j);
				_putchar('0' + k);
			}
			if (m != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			else {_putchar('\n');}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			if (i >= 100)
			{
				j = i % 10;
				k = i / 10;
				l = k % 10;
				m = k / 10;
				_putchar('0' + m);
				_putchar('0' + l);
				_putchar('0' + j);
			}
			else
			{
				j = i / 10;
				k = i % 10;
				_putchar('0' + j);
				_putchar('0' + k); 
			}
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar('\n');
		}
	}
}
