#include "holberton.h"

/**
 * rev_string - reverses string
 * @s: String to be reversed
 */

void rev_string(char *s)
{
	int counter;
        int length = _strlen(s);
	int i = 0;
	int k;
	int rev[] = s;

        for (counter = 0; s[counter]; counter++)
	{}
        for (length = counter -1; s[length]; length--)
	{
		rev[i] = s[length];
		i++;
	}
	for (k = 0; rev[k]; k++)
		_putchar(rev[k]);
	for (k = 0; rev[k]; k++)
		_putchar(rev[k]);

}
