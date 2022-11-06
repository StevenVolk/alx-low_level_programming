#include <stdio.h>
#include <stdlib>

/**
 * array_range - creates an array from min (included) to max (included)
 *
 * @min: min value in array
 * @max: max value in array
 * Return: a pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int size;
	int *ray;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	ray = malloc(size);
	if (ray == NULL)
		return (NULL);
	return (ray);
}
