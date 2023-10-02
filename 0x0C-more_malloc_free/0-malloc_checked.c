#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: unsigned interger
 * Return: a pointer to an allocated memory
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *chk;

	chk = malloc(b);
	if (chk == NULL)
		exit(98);
	return (chk);
}
