#include "main.h"

/**
 * print_times_table - prints times table of any number between 0 and 15 inclusive
 * @n: times table number
 *
 * Return: returns void
 */

void print_times_table(int n)
{
	int i, j, k, l, m, o;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j; l = k / 100; m = (k / 10) % 10; o = k % 10;
				if (k < 10) {_putchar('0' + k);}
				else if (k < 100) {_putchar('0' + m); _putchar('0' + o);}
				else {_putchar('0' + l); _putchar('0' + m); _putchar('0' + o);}
				
				if (j == n) {_putchar('\n');}
				else if (k < 10) {_putchar(','); _putchar(' '); _putchar(' '); _putchar(' ');}
				else if (k < 100) {_putchar(','); _putchar(' '); _putchar(' ');}
				else {_putchar(','); _putchar(' ');}
			}
		}
	}
}
