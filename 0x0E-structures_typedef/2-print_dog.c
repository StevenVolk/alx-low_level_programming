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
		if (d->name)
			printf("Name: %s\n", d->name);
		printf("Name: (nil)\n");
		if (d->age)
			printf("Age: %f\n", d->age);
		printf("Age: (nil)\n");
		if (d->owner)
			printf("Owner: %s\n", d->owner);
		printf("Owner: (nil)\n");
	}
}
