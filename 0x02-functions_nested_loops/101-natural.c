#include "holberton.h"
#include <stdio.h>

/**
 * main - print natural numbers below 1024
 *
 * Return: 0 Always success.
 */
int main(void)
{
	int a;
	int sum = 0;

	for (a = 0; a < 1024; a++)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
		{
			sum = sum + a;
		}
	}
	printf("%d\n", sum);
	return (0);
}
