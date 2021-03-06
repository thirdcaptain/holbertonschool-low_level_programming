#include "holberton.h"

/**
 * _strncat - Concatenates two strings to n length.
 * @dest: Destination string to be concatenated to.
 * @src: Source string to be concatenated from.
 * @n: The length of the string.
 *
 * Return: Pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int len_dest = 0;
	int len_src = 0;

	len_dest = _strlen(dest);
	len_src = _strlen(src);
	while (i < n)
	{
		dest[len_dest + i] = src[i];
		i++;
		if (i == len_src)
			break;
	}
	dest[len_dest + i + 1] = '\0';
	return (dest);
}
