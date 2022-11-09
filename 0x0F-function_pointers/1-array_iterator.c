#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each elemen
 *
 * @size: size of the array
 * @action: a pointer to the function you need to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t int i;

	if (!action || !array)
		return;
	i = 0;
	while (i < size)
	{
		action(array[size]);
		i++;
	}
}
