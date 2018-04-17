#include "holberton.h"

/**
 * _strspn - get length of prefix substring
 * @s: String to be evaluated.
 * @accept: String of values to accept.
 *
 * Return: The number of bytes in accept which are in s.
 */

unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	int i;

	while (*s)
	{
		i = 0;
		while (accept[i])
		{
			if (*s == accept[i])
			{
				count++;
				break;
			}
			i++;
			if (accept[i] == '\0')
				return (count);
		}
		s++;
	}
	return (count);
}
