#include <stdio.h>
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
	char *cp_name, *cp_owner;
	int s;
	int i = 0, j = 0;

	while (name[i])
		i++;

	while (owner[j])
		j++;

	cp_name = malloc(i + 1);
	if (cp_name == NULL)
		return (NULL);
	for (s = 0; name[s]; s++)
	{
		cp_name[s] = name[s];
	}
	cp_name[s] = '\0';

	cp_owner = malloc(j + 1);
	if (cp_owner == NULL)
		return (NULL);
	for (s = 0; owner[s]; s++)
	{
		cp_owner[s] = owner[s];
	}
	cp_owner[s] = '\0';

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	new->name = cp_name;
	new->age = age;
	new->owner = cp_owner;
	if (new)
		return (new);
	else
		return (NULL);
}
