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
	unsigned int s_i = 0;

	while (src[s_i])
	{
		*dest = src[s_i];
		s_i++;
		dest++;
		if (s_i == n)
			break;
	}
	return (dest);
}
