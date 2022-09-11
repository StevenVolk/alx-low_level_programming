#include <stdio.h>

/**
 * main - prints some numbers
 *
 * Return: returns zero
 */

int main(void)
{
	int i;
	int j;
	int k;
	int z;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				for (z = 0; z < 10; z++)
				{
					if ((k >= i) & (z > j))
					{
						putchar((i % 10) + '0');
						putchar((j % 10) + '0');
						putchar(' ');
						putchar((k % 10) + '0');
						putchar((z % 10) + '0');
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
