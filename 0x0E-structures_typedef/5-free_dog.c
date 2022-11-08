#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dog
 *
 * @d: a structure of dog_t
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		d = malloc(d);
		d->name = malloc(sizeof(d->name));
		d->age = malloc(sizeof(d->age));
		d->owner = malloc(sizeof(d->owner));
		free(d->name);
		free(d->age);
		free(d->owner);
		free(d);
	}
}
