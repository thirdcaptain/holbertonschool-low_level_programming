#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_length - determines string length
 * @string: string to evaluate
 *
 * Return: length of string
 */

int string_length(char *string)
{
	int length = 0;

	while (string[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * string_nconcat - concatenates two strings with n length for string 2
 * @s1: string 1
 * @s2: string 2
 * @n: length for s2 to use
 *
 * Return: pointer to concatenated string, NULL upon failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *combined;
	unsigned int i;
	unsigned int s1_len;
	unsigned int s2_len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1_len = string_length(s1);
	s2_len = string_length(s2);
	if (n > s2_len)
		n = s2_len;
	combined = malloc((sizeof(char) * s1_len + sizeof(char) * n) + 1);
	if (combined == NULL)
		return (NULL);
	for (i = 0; i < s1_len; i++)
		combined[i] = s1[i];
	for (i = 0; i < n; i++)
		combined[i + s1_len] = s2[i];
	combined[s1_len + i] = '\0';
	return (combined);
}
