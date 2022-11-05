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
	char *buffer;

	buffer = malloc(size * sizeof(char));
	if (size == 0 || buffer == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		buffer[i] = c;

	return (buffer);
}
