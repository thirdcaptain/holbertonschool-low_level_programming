#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates string
 * @s1: first string
 * @s2: second string
 *
 * Return: Pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{

	int i;
	int s1_len = 0, s2_len = 0;
	char *combined;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
	{
		s1_len++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		s2_len++;
	}
	combined = malloc((s1_len * sizeof(char) + s2_len * sizeof(char)) + 1);
	if (combined == NULL)
		return (NULL);
	for (i = 0; i < s1_len; i++)
	{
		combined[i] = s1[i];
	}
	for (i = 0; i <= s2_len; i++)
	{
		combined[i + s1_len] = s2[i];
	}
	return (combined);
}
