#include "holberton.h"

/**
 *jack_bauer - prints 00:00 to 23:59
 */

void jack_bauer(void)
{
	int a;
	int b;
	int j;
	int k;

	for (a = '0'; a <= '1'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (j = '0'; j <= '5'; j++)
			{
				for (k = '0'; k <= '9'; k++)
				{
					_putchar(a);
					_putchar(b);
					_putchar(':');
					_putchar(j);
					_putchar(k);
					_putchar('\n');
				}
			}
		}
	}
	a = '2';
	for (b = '0'; b <= '3'; b++)
	{
		for (j = '0'; j <= '5'; j++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				_putchar(a);
				_putchar(b);
				_putchar(':');
				_putchar(j);
				_putchar(k);
				_putchar('\n');
			}
		}
	}
}
