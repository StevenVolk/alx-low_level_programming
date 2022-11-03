#include <stdio.h>

/**
 * _strchr - points to c in the s, or NULL if the character is not found
 *
 * @s: input string
 * @c: input character
 * Return: returns first occurence of character c to the end of string s
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		else
			s++;
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
