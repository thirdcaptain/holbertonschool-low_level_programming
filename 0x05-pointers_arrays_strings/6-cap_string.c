#include "holberton.h"

/**
 * cap_string - Capitalizes all words.
 * @s: String to be capitalized.
 *
 * Return: Capitalized string.
 */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[0] >= 'a' && s[i] <= 'z')
		{
			s[0] -= 32;
		}
		if (i > 0 && (s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.'
			    || s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"'
			    || s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{'
			    || s[i - 1] == '}' || s[i - 1] == 32 || s[i - 1] == '\n'
			      || s[i - 1] == '\t') && (s[i] >= 'a' && s[i] <= 'z'))
		{
			s[i] -= 32;
		}
		i++;
	}
	return (s);
}
