#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocate memory from old size to new size
 *
 * @ptr: pointer to previously allocated memory
 * @old_size: size of previously allowated memory
 * @new_size: size of newly allocated memory
 * Return: pointer to newly allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (old_size == new_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size || ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	return;
}
