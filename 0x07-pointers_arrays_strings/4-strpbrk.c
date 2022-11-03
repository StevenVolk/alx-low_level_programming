#include <stdio.h>

/**
 * _strpbrk - points to the first occurence of an acceptable bytes
 *
 * @s: string to be checked
 * @accept: acceptable bytes
 * 
 * Return: the point of first occerence to end of s
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				return (s);
			}
			j++;
		}
		i++;
	}

	return (NULL);
}
