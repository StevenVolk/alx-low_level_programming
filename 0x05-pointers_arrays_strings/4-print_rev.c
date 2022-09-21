#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints the reverse of a string
 * @s: given string
 */

void print_rev(char *s)
{
	int i = 0;
	char *temp = *s

	while (*temp != '\0')
	{
		i++;
		temp++;
	}

	while (i > 0)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
