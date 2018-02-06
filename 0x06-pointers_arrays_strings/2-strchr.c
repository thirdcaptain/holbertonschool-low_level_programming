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
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (0);
}
