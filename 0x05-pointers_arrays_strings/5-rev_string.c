#include <stdio.h>
#include "main.h"

/**
 * rev_string - prints the reverse of a string
 * @s: given string
 */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char *temp = s;

	while (*temp != '\0')
	{
		i++;
		temp++;
	}

	i--;

	while (j <= i)
	{
		j++;
	}
	_putchar('\n');

	while (i >= 0)
	{
		i--;
	}
	_putchar('\n');
}
