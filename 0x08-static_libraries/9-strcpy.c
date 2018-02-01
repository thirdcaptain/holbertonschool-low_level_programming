#include "holberton.h"

/**
 * _strcpy - copy string
 * @dest: The destination to copy the string
 * @src: The string to be copied
 *
 *Return: The pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
