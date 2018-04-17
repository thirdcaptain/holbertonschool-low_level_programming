#include "holberton.h"

/**
 * _strncpy - Copies a string.
 * @dest: Destination string to be copied to.
 * @src: Source string to be copied from.
 * @n: The length of the string.
 *
 * Return: Pointer to the resulting string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int len_src = 0;

	len_src = _strlen(src);
	while (i < n)
	{
		if (i < len_src)
		{
			dest[i] = src[i];
			i++;
		}
		else
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}
