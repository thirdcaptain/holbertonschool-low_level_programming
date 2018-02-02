#include "holberton.h"

/**
 * _strcmp - Compares two strings.
 * @s1: First string to be compared.
 * @s2: Second string to be compared.
 *
 *Return: Negative int if s1 < s2, 0 if s1 = s2, and positive int if s1 > s2.
 */

int _strcmp(char *s1, char *s2)
{
/*	int cmp = 0;
	int i = 0;

	while (s1[i])
	{
		cmp += s1[i] - s2[i];
		i++;
	}
*/
	return (s1 - s2);
}
