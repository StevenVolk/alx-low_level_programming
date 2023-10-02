#include <stdio.h>

/**
 * _strncat - append the string src to dest and overwriting the null byte
 * @dest: variable to be appended to
 * @src: variable to be appended
 * @i: number of bytees from src to copy
 *
 * Return: returns dest
 */

char *_strncat(char *dest, char *src, int i)
{
	int j, k;

	j = 0;
	k = 0;

	while (dest[j] != '\0')
	{
		j++;
	}

	while (k < i && src[k] != '\0')
	{
		dest[j] = src[k];
		j++;
		k++;
	}
	dest[j] = '\0';
	return (dest);
}
