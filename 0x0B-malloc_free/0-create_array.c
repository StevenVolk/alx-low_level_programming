#include <stdio.h>

/**
 * create_array - creates array of int
 * @size: size of array
 * @c: character
 * Return: NULL if size 0, otherwise pointer to array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr[size] = c;

	if (size == 0)
		return (NULL);

	for (i = 1; i < size; i++)
		arr[i] = c;

	return (arr[]);
}
