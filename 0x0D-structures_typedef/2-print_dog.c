#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints dog struct
 * @d: Dog struct to print
 */

void print_dog(struct dog *d)
{
	if (!d)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (!(d->age))
		printf("Name: (nil)\n");
	else
		printf("Age: %6f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
