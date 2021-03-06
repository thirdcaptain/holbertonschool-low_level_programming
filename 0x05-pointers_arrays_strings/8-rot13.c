#include "holberton.h"

/**
 * rot13 - Encodes a string using rot13.
 * @s: String to be encoded.
 *
 * Return: Encoded string.
 */

char *rot13(char *s)
{
	char *src = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rep = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i = 0;
	int j = 0;

	for (i = 0; s[i] != '\0';  i++)
	{
		for (j = 0; src[j] != '\0'; j++)
		{
			if (s[i] == src[j])
			{
				s[i] = rep[j];
				break;
			}
		}
	}
	return (s);
}
