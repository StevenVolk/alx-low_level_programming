#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts2 - writes to standard output
 * @str: given string
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
