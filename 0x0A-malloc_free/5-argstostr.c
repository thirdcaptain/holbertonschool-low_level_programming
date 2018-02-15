#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments
 * @ac: number of arguments
 * @av: argument values
 *
 * Return: pointer to new string
 */

char *argstostr(int ac, char **av)
{
	char *string;
	char *new;
	int length;
	int i, j;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			length++;
	}
	string = malloc(sizeof(char) * (length + ac + 1));
	if (string == NULL)
		return (NULL);
	new = string; /*copies beginning of string pointer*/
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*new = av[i][j];
			new++;
		}
		*new = '\n';
		new++;
	}
	*new = '\0';
	return (string);
}
