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
		if (d->name)
			d->name = NULL;
		if (d->owner)
			d->owner = NULL;
		if (d->age)
			d->age = 0.0;
		d = NULL;
	}
}
