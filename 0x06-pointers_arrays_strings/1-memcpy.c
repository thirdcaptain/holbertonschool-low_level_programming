#include "holberton.h"

/**
 * _memcpy - copies memory area.
 * @dest: destination area to copy memory to
 * @src: source memory area to copy memory from
 * @n: size of memory to copy
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
