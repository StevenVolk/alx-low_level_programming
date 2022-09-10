#include <stdio.h>

/**
 * main - prints numbers not repeated or not same backwards
 *
 * Return: returns zero
 */

int main(void)
{
	int j;
	j = 1;

	for (i = 0; i < 9; i++)
	{
		for (k = j; k < 10; k++)
		{
			if (i != k)
			{
				putchar((i % 10) + '0');
				putchar((k % 10) + '0');
				if (i < 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		j++;
	}
	putchar('\n');
}
