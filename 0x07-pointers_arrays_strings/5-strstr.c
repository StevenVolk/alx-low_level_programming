#include <stdio.h>

/**
 * _strstr - points the first occurence of a string
 *
 * @haystack: the string to be checked
 * @needle: the string to be found
 * Return: the first occurence of string
 */

char *_strstr(char *haystack, char *needle)
{
	int z;

	int i = 0;
	while (*needle)
		i++;

	while (*haystack)
	{
		z = 0;
		while (needle[z])
		{
			if (needle[z] == haystack[z])
				z++;
			else
				break;
		}
		if (z == i)
			return (haystack);
	}
	return (NULL);
}
