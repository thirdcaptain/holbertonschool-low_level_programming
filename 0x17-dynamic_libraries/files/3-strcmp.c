#include "holberton.h"

/**
 * _strcmp - Compares two strings.
 * @s1: First string to be compared.
 * @s2: Second string to be compared.
 *
 * Return: ASCII difference if s1 < s2 or s1 > s2, and 0 if s1 = s2.
 */

int _strcmp(char *s1, char *s2)
{

	int i = 0;

	while (s1[i])
	{
		if (s1[i] < s2[i] || s1[i] > s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
