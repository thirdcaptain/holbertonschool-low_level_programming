#include <stdio.h>

/**
 * main - prints program name
 * @argc: number of arguments
 * @argv: array of arguments passed to main
 *
 * Return: 0 - always success
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
