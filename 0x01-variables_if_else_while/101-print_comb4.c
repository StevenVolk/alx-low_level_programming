#include <stdio.h>

/**
 * main - prints a bunch of numbers, not really explaining :) lol
 *
 * Return: returns zero
 */

int main(void)
{
	int i;
	int j;
	int k;
	int y;
	int z;

	y = 1;
	z = 2;

	for (i = 0; i < 8; i++)
	{
		for (j = y; j < 9; j++)
		{
			for (k = z; k < 10; k++)
			{
				if (i != j && j != k)
				{
					putchar((i % 10) + '0');
					putchar((j % 10) + '0');
					putchar((k % 10) + '0');
					if (i < 7)
					{
						putchar(',');
						putchar(' ');
					}
				}	
			}
			z++;
		}
		y++;
	}
	putchar('\n');
	return (0);
}