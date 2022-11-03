#include <stdio.h>

/**
 * s_strpbrk - points to the first occurence of an acceptable bytes
 *
 * @s: string to be checked
 * @accept: acceptable bytes 
 * Return: the point of first occerence to end of s
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		j = 0;
		while (accept[j])
		{
			if (*s == accept[j])
			{
				return (s);
			}
			j++;
		}
		s++;
	}

	return (NULL);
}
