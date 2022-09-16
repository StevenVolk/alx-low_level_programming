#include "main.h"

/**
 * _isdigit - check if it a digit between 0 and 9 inclusive
 * @c: character to be checked
 * Return: returns 1 for true and 0 for otherwise
 */

int _isdigit(int c)
{
	if (0 <= c && c <= 9)
		return (1);
	return (0);
}
