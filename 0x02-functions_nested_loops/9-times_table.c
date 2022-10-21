#include "main.h"

/**
 * times_table - prints times table from 0 to 9
 *
 * Return: returns void
 */

void times_table(void)
{
	int i, j, k, l, m;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			l = k / 10;
			m = k % 10;

			if (k == 0)
			{
				_putchar(' ');
				_putchar('0');
			}
			else if (k <= 9)
			{
				_putchar(' ');
				_putchar('0' + m);
			}
			else
			{
				_putchar('0' + l);
				_putchar('0' + m);
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar('\n');
		}
	}
}
