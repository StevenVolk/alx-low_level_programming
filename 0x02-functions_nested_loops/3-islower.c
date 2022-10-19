#include "main.h"

/**
 * _islower - checks for lowercase
 * @c: character
 *
 * Return: print 1 for lowercase else 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
