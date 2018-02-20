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
	if (cat->name == NULL)
		return (NULL);

	cat->age = age;
	if (cat->age == 0)
		return (NULL);

	cat->owner = owner;
	if (cat->owner == NULL)
		return (NULL);

	return (cat);
}
