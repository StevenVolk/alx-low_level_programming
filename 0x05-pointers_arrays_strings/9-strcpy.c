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
	char *temp = "%s\n", *src;

	i = 0;

	while (temp[i] != '\0')
	{
		dest[i] = temp[i];
		i++;
	}
	return (dest);
}
