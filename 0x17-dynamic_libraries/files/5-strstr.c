#include "holberton.h"

/**
 * _strstr - locates a substring
 * @haystack: String to locate substring in.
 * @needle: Substring to locate.
 *
 * Return: Pointer to beginning of the located substring, or NULL if not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int i_i;
	int j;

	while (haystack[i])
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			i_i = i;
			while (needle[j] == haystack[i_i])
			{
				j++;
				i_i++;
				if (needle[j] == '\0')
					return ((haystack + i));
			}
		}
		if (needle[0] == '\0')
			return (haystack);
		i++;
	}
	return (0);
}
