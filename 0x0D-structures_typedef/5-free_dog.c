#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - frees dog memory
 * @d: struct to free
 */

void free_dog(dog_t *d)
{
	free(d);
}