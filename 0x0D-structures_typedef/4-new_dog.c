#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - creates new dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 *
 * Return: Pointer to dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *cat;

	cat = malloc(sizeof(dog_t));
	if (cat == NULL)
		return (NULL);

	cat->name = name;
	cat->age = age;
	cat->owner = owner;
	return (cat);
}
