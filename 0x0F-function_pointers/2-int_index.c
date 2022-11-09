#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - 
 * @array: an array
 * @size: number of elements in the array
 * @cmp: a pointer to the function to be used to compare values
 * Return: returns the index of the first element for 
 * which the cmp function does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index, i;

	index = -1;
	if (size <= 0)
		return (index);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			index = i;
			break;
		}
	}
	return (index);
}
