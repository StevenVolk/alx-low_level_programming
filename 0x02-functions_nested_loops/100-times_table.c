#include "main.h"

/**
 * print_times_table - prints times table of any number between 0 and 15 inclusive
 * @n: times table number
 *
 * Return: returns void
 */

void print_times_table(int n)
{
	int i, j, k, l, m, q, o;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;

				if (k < 10)
				{
					_putchar('0' + k);
					if (j != n)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					else
						_putchar('\n');
				}
				else if (k < 100)
				{
					l = k / 10;
					m = k % 10;
					_putchar('0' + l);
					_putchar('0' + m);
					if (j != n)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
					}
					else
						_putchar('\n');
				}
				else
				{
					l = k % 10;
					m = k / 10;
					q = m / 10;
					o = m % 10;
					_putchar('0' + o);
					_putchar('0' + q);
					_putchar('0' + l);
					if (j != n)
					{
						_putchar(',');
						_putchar(' ');
					}
					else
						_putchar('\n');
				}
			}
		}
	}
}
