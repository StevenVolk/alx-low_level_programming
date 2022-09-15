#include <stdio.h>
#include <ctype.h>

/**
 * isupper - checks if a character is upper case
 *
 * Return: 1 for upper or 0 for lower
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
