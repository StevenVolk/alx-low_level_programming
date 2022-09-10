#include <stdio.h>

/**
 * main - prints hexa
 *
 * Return: returns zero
 */

int main(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		putchar((i % 10) + '0');
	}
	for (c = 'a'; c < 'g'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
