#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if successful, 1 if program does not receive two arguments
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	int product;

	if (argc <= 2 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	product = atoi(*(argv + 1)) * atoi(argv[2]);
	printf("%d\n", product);
	return (0);
}
