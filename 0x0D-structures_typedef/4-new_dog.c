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
	int i;
	int name_len = 0;
	int owner_len = 0;

	cat = malloc(sizeof(dog_t));
	if (cat == NULL)
		return (NULL);
	if (name != NULL)
	{
		for (i = 0; name[i] != '\0'; i++)
			name_len++;
		cat->name = malloc((name_len + 1) * sizeof(char));
		if (cat->name == NULL)
		{
			free(cat);
			return (NULL);
		}
		for (i = 0; i < name_len; i++)
			cat->name[i] = name[i];
	}
	if (owner != NULL)
	{
		for (i = 0; owner[i] != '\0'; i++)
			owner_len++;
		cat->owner = malloc((owner_len + 1) * sizeof(char));
		if (cat->owner == NULL)
		{
			free(cat->name);
			free(cat);
			return (NULL);
		}
		for (i = 0; i < owner_len; i++)
			cat->owner[i] = owner[i];
	}
	cat->age = age;
	return (cat);
}
