#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @str: String to determine length
 *
 * Return: The length of a string
 */

int _strlen(char *str)
{
	if (*str != '\0')
		return (1 + _strlen(str + 1));
	return (0);
}

/**
 * compare - compare string to see if palindrome
 * @start: String at beginning
 * @end: Strint at end
 *
 * Return: 0 if not a palindrome, 1 if it is a palidrome.
 */

int compare(char *start, char *end)
{
	if (*start != *end)
		return (0);
	if (*start > *end)
		return (0);
	if (*start == *end)
		return (1);
	start++;
	end--;
	return (compare(start, end));
}

/**
 * is_palindrome - determines if a string is a palindrome
 * @s: String to evaluate.
 *
 * Return: 1 if a string is a palindrome, 0 otherwise.
 */

int is_palindrome(char *s)
{
	int length = _strlen(s) - 1;
	char *end = s + length;

	if (*s == '\0')
		return (1);
	return (compare(s, end));
}
