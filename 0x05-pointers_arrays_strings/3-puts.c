#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _puts - writes to standard output
 * @str: given string
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
