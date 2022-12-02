#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number
 * @index: index
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > sizeof(int) * 8)
	if (n == NULL)
		return (-1);
	i = 1 << index;
	*n = *n | i;
	return (1);
}
