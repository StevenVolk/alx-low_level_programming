#include "main.h"

/**
 * jack_bauer - print every minutes of a day
 *
 * Return: returns void
 */

void jack_bauer(void)
{
	int i, j, k, l, z;

	for (i = 0; i <= 2; i++)
	{
		z = 9;

		if (i == 2)
			z = 3;

		for (j = 0; j <= z; j++)
		{
			for (k = 0; k <= 5; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					_putchar('0' + i);
					_putchar('0' + j);
					_putchar(':');
					_putchar('0' + k);
					_putchar('0' + l);
					_putchar('\n');
				}
			}
		}
	}
}
