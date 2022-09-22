#include <stdio.h>

/**
 * _strcat - append the string src to dest variable and overwriting the null byte
 * @dest: variable to be appended to
 * @src: variable to be appended
 *
 * Return: returns dest
 */

char *_strcat(char *dest, char *src)
{
	int j, k;
	char *temp = "%s\n", src

	j = 0;
	k = 0;

	while (dest[j] != '\0')
	{
		j++;
	}

	while (temp[k] != '\0')
	{
		dest[j] = temp[k];
		j++;
		k++;
	}
	dest[j] = '\n';

	return (dest);
}
