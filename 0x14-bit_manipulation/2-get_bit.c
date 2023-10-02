#include "main.h"

/**
 * get_bit - the value of a bit at a given index
 * @n: number
 * @index: index
 * Return: 1 or 0
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index > (sizeof(int) * 8))
		return (-1);
	i = (n >> index) & 1;
	if ((i == 1) || (i == 0))
		return (i);
	else
		return (-1);
}
