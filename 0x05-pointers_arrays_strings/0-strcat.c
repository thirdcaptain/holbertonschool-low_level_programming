#include "holberton.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: Destination string to be concatenated to.
 * @src: Source string to be concatenated from.
 *
 * Return: Pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int len_src = 0;
	int len_dest = 0;

	len_dest = _strlen(dest);
	len_src = _strlen(src);
	while (src[i])
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i + 1] = '\0';
	return (dest);
}
