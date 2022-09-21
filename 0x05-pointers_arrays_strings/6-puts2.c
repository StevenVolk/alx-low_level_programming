#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts2 - writes to standard output
 * @str: given string
 */

void puts2(char *str)
{
	int flag = 0;

	while (*str != '\0')
	{
		if (flag == 0)
		{
			_putchar(*str);
			str++;
		}
		else
		{
			str++;
		}
	}
	_putchar('\n');
}
