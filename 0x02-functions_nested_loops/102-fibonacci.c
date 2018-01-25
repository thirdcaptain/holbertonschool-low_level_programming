#include <stdio.h>

/**
 *main - print the first 50 fibonacci numbers
 */

int main(void)
{
	long long int a = 0;
	long long int b = 1;
	long long int c;
	int i;

	for (i = 0; i < 50; i++)
	{
		c = a + b;
		a = b;
		b = c;
		if (i < 49)
		{
		printf("%lld, ", c);
		}
		else
			printf("%lld\n", c);
	}
	return (0);
}
