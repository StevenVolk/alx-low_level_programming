#include "main.h"

/**
 * _abs - returns absolute value of number
 * @n: input number
 *
 * Return: absolute value of number
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-1 * n);
	}
	return (n);
}
