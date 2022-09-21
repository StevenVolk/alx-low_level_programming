#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints the reverse of a string
 * @s: given string
 */

void print_rev(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	i--;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
