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
	int length;
	int i, j, k = 0;

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
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			string[k] = av[i][j];
			k++;
		}
		string[k] = '\n';
		k++;
	}
	string[k] = '\0';
	return (string);
}
