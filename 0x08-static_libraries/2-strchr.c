#include "holberton.h"
#define NULL 0

/**
 * _strchr - locates a character in a string
 * @s: String to be evaluated
 * @c: Character to located
 *
 * Return: pointer to first occurance of the character in string s
 * or NULL if not found.
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
