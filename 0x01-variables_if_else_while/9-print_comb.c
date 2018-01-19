#include <stdio.h>

/**
 * main - 0, 1, ... 8, 9 using putchar and no var type char
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
		if (num < 57)
		{
			putchar(',');
			putchar(' ');
		}
	};
	putchar('\n');
	return (0);
}
