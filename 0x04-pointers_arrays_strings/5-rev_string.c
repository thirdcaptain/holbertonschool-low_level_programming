#include "holberton.h"

/**
 * rev_string - reverses string
 * @s: String to be reversed
 */

void rev_string(char *s)
{
	int length;
	char tmp;
	int i;

	for (length = 0; s[length]; length++)
	{}
	length--;
	for (i = 0; i < length; i++)
	{
		tmp = s[i];
		s[i] = s[length];
		s[length] = tmp;
		length--;
	}
}
