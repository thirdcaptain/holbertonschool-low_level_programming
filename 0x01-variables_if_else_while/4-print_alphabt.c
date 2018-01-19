#include <stdio.h>

/**
 * main - print alphabet except q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (!(alpha == 'q' || alpha == 'e'))
			putchar(alpha);
	}
	putchar('\n');
	return (0);
}
