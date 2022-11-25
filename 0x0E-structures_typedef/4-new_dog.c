#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - store a copy of name and owner
 * @name: name of new_dog
 * @age: age of new_dog
 * @owner: owner of new_dog
 * Return: the new dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	char *c_name, *c_owner;
	int s, i = 0, j = 0;

	while (name[i])
		i++;
	while (owner[j])
		j++;
	c_name = malloc(i + 1), c_owner = malloc(j + 1), new = malloc(sizeof(dog_t));
	if (c_name == NULL)
	{
		free(c_name);
		return (NULL);
	}
	for (s = 0; name[s]; s++)
	{
		c_name[s] = name[s];
	}
	c_name[s] = '\0';
	if (c_owner == NULL)
	{
		free(c_name), free(c_owner);
		return (NULL);
	}
	for (s = 0; owner[s]; s++)
	{
		c_owner[s] = owner[s];
	}
	c_owner[s] = '\0';
	if (new == NULL)
	{
		free(c_name), free(c_owner), free(new);
		return (NULL);
	}
	new->name = c_name, new->age = age, new->owner = c_owner;
	if (new)
		return (new);
	return (NULL);
}
