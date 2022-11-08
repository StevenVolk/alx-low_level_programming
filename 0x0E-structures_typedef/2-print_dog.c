#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints name, age and owner of dog
 *
 * @d: structure of a dog
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d != NULL){
		if (d->name != NULL)
			printf("%s\n", "Name: "d->name);
		printf("%s\n", "Name: (nil)");
		if (d->age != NULL)
			printf("%s\n", "Age: "d->age);
		printf("%s\n", "Age: (nil)");
		if (d->owner != NULL)
			printf("%s\n", "Owner: "d->owner);
		printf("%s\n", "Owner: (nil)");
	}
}
