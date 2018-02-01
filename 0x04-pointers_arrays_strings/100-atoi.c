#include "holberton.h"

/**
 * _atoi - converts a string to int
 * @s: String to be converted
 *
 * Return: integer value of string
 */

int _atoi(char *s)
{
	int i = 0;
	unsigned int value = 0;
	int neg_count = 0;
	int c = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			neg_count++;
		if (s[i] >= '0' && s[i] <= '9')
		{
			value = (value * 10) + (s[i] - '0');
			c++;
		}
		if ((c > 0) && !(s[i] >= '0' && s[i] <= '9'))
			break;
		i++;
	}
	if (neg_count % 2 != 0)
		value = -value;
	return (value);
}
