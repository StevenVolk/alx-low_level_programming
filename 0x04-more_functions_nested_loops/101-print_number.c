#include "main.h"

/**
 * print_number - print numbers with only _putchar
 * @n: number to be printed
 */

void print_number(int n)
{
	int i, j, k;

	k = 9999;
	if (n > 0)
	{i = n;
		j = n;
	}
	else if (n == 0)
		j = 0;
	else
	{i = n * -1;
		j = n * -1;
		_putchar('-');
	}
	while (k != 1)
	{k = 1;
		while (j > 9)
		{j /= 10;
			k *= 10;
		}
		_putchar('0' + j);
		j = i % k;
		i = j;
		while (j < k/10)
		{_putchar('0');
			k /= 10;
			j = i % k;
			i = j;
		}
	}
}
