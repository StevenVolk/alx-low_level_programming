#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints last half of string
 * @str: given string
 */

void puts_half(char *str)
{
	int n;
	int j;
	int i = 0;

	while (*str != '\0')
	{
		i++;
		str++;
	}

	n = (i - 1) / 2;

	for (j = n; j < i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
