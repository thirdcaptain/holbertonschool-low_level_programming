#include <stdio.h>

/**
 * main - 00, 01, ... 98, 99 using putchar and no var type char
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;
	int num2;

	for (num = 48; num <= 57; num++)
	{
		for (num2 = 48; num2 <= 57; num2++)
		{
			putchar(num);
			putchar(num2);
			if (!(num == 57 && num2 == 57))
			{
				putchar(',');
				putchar(' ');
			};
		};
	};

	putchar('\n');
	return (0);
}
