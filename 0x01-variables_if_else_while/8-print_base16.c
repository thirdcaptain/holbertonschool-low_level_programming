#include <stdio.h>

/**
 * main - prints numbers of base 16
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int hex;

	for (hex = 48; hex <= 57; hex++)
	{
		putchar(hex);
	};
	for (hex = 97; hex <= 102; hex++)
	{
		putchar(hex);
	}
	putchar('\n');
	return (0);
}
