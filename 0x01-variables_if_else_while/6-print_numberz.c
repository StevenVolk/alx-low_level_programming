#include <stdio.h>

/**
 * main - prints zero to nine
 *
 * Return: returns zero
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar((i % 10) + '0');
	}
	putchar('\n');
	return (0);
}
