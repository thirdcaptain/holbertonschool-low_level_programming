#include "holberton.h"

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
	return (0);
}
