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
	int s1_size = 0;
	int s2_size = 0;
	int i = 0;
	int j = 0;

	while (s1[i])
	{
		s1_size += s1[i];
		i++;
	}
	while (s2[j])
	{
		s2_size += s2[j];
		j++;
	}
	return (s1_size - s2_size);
}
