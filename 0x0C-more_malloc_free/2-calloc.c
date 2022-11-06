#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory of an array of nmemb elements of size bytes each
 *
 * @nmemb: number of elements in an array
 * @size: size of each element
 * Return: a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int m;
	unsigned int mem;
	char *loc;

	if (nmemb == 0 || size == 0)
		return (NULL);
	loc = malloc(nmemb * size);
	mem = nmemb * size;
	if (loc == NULL)
		return (NULL);
	for (m = 0; m < nmemb; m++)
		loc[m] = 0;
	return (loc);
}
