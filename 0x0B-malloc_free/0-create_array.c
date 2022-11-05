#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates array of int
 * @size: size of array
 * @c: character
 * Return: NULL if size 0, otherwise pointer to array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;
	char a;

	arr = malloc(size * sizeof(char));
	if (size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;
	&a = arr;
	free(arr);
	return (&a);
}
