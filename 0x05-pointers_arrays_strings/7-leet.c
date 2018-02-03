#include "holberton.h"

/**
 * leet - Encodes a string into 1337.
 * @s: String to be encoded.
 *
 * Return: Encoded string.
 */

char *leet(char *s)
{
	int i = 0;
	int j = 0;
	char *spec = "aeotlAEOTL";
	char *repl = "4307143071";

	while (s[i])
	{
		while (spec[j])
		{
			if (s[i] == spec[j])
				s[i] = repl[j];
			j++;
		}
		i++;
		j = 0;
	}
	return (s);
}
