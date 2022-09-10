#include <stdio.h>

/**
 * main - prints number with comma and space
 *
 * Return: returns zero
 */

int main(void)
{
	int i;

	for (i = 0; i < 9; i++)
	{
		putchar((i % 10) + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('9\n');
	return (0);
}
