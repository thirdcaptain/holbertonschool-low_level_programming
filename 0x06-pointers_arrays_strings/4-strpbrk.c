#include "holberton.h"

/**
 * _strpbrk - locations the first occurence in string s
 * any bytes in string accept
 * @s: String to be evaluted.
 * @accept: String with acceptable values.
 *
 * Return: Pointer to the byte in s that matches a byte in accept.
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		i = 0;
		while ( accept[i])
		{
			if (*s == accept[i])
				return (s);
			i++;
		}
		s++;
	}
	return (0);
}
