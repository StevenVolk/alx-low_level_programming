#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each elemen
 *
 * @array: an array
 * @size: size of the array
 * @action: a pointer to the function you need to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	void (*ion)(int);

	ion = action;
	i = 0;
	if (!action || !array)
		return;
	while (i < size)
	{
		ion(array[size]);
		i++;
	}
}
