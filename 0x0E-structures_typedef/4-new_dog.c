#include <stdio.h>i
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - store a copy of name and owner
 * @name: name of new_dog
 * @age: age of new_dog
 * @owner: owner of new_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	new->name = name;
	new->age = age;
	new->owner = owner;
	if (new)
		return (new);
	else
		return (NULL);
}
