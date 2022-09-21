#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints the reverse of a string
 * @s: given string
 */

void print_rev(char *s)
{
	int len = _strlen(s);

	while (len > 0)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
