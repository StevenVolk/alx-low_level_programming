#include <stdio.h>

/**
 * _strcpy - copies a string to another variable
 * @src: string to copied
 * @dest: variable to store a copy
 *
 * Return: returns the copy (dest)
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int j;

	i = 0;

	while (src['i'] != '\0')
	{
		i++;
	}

	for (j = 0; j <= i; j++)
	{
		dest[j] = src[j];
	}

	return (dest);
}
