#include "main.h"

/**
 * more_numbers - prints 1 to 14 ten times
 */

void more_numbers(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 10; i++)
	{
		k = 0;

		for (j = 0; j <= 14; i++)
		{
			_putchar(k);
			k++;
		}
		_putchar('\n');
	}
}
