#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - initializes struct dog with data
 * @d: struct passed to function
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
