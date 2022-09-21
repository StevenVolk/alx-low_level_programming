#include <stdio.h>
#include "main.h"

/**
 * rev_string - prints the reverse of a string
 * @s: given string
 */

void rev_string(char *s)
{
	int j;
	char t;

	int i = 0;
	char *temp = s;

	while (*temp != '\0')
	{
		i++;
		temp++;
	}

	i--;

	for (j = 0; j < i/2; j++)
	{
		t = s[j];
		s[j] = s[i];
		s[i] = t;
	}
}
