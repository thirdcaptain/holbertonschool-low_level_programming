#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments passed into main
 *
 * Return: 0 - Always success
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	int arg_count;

	for (arg_count = 0; arg_count < argc; arg_count++)
	{
		printf("%s\n", argv[arg_count]);
	}
	return (0);
}
