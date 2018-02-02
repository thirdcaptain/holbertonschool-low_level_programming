#include "holberton.h"

/**
 * string_toupper - Changes all lowercase letters to uppercase
 * @s: String to be converted.
 *
 *Return: Converted string.
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		i++;
	}
	return (s);
}
