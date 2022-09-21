#include <stdio.h>
#include <string.h>

/**
 * _strlen - returns the length of a string
 * @s: given string
 *
 * Return: return length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while(*s!='\0')
	{
		i++;
		s++;
	}
	return i;
}
