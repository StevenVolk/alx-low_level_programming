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
		free(d->name);
		free(d->owner);
		free(d->age);
		free(d);
	}
}
