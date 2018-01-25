#include <stdio.h>

/**
 *main - print the first 50 fibonacci numbers
 */

int main(void)
{
	long a = 0;
	long b = 1;
	long c;
	int i;

	for (i = 0; i < 50; i++)
	{
		c = a + b;
		a = b;
		b = c;
		if (i < 49)
		{
		printf("%ld, ", c);
		}
		else
			printf("%ld\n", c);
	}
	return (0);
}
