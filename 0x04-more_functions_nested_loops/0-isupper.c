#include "main.h"

/**
 * isupper - checks if a character is upper case
 * @c: character to be checked
 * Return: 1 for upper or 0 for lower
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
