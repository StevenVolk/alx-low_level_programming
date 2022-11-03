#include "main.h"

/**
 * _sqrt_recursion - finds natural square root of a number
 *
 * @n: number
 * Return: natural square root of a number
 */

int _sqrt_recursion(int n)
{
	int i;

	if (n <= 0)
		return (-1);
	for (i = 1; i < ((n / 2) + 1); i++)
	{
		if (_pow_recursion(i, 2) == n)
		{
			return (i);
		}
	}
	return (-1);
}
