#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 *
 * @str: string to be duplicated
 * Return: points to the new duplicated string
 */

char *_strdup(char *str)
{
	int i;
	char *dup;
	int size = 0;

	if (str == NULL)
		return (NULL);
	while (str[size])
		size++;
	dup = malloc((size + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		dup[i] = str[i];

	return (dup);
}
