#include <stdio.h>
#include <ctype.h>

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
	int i;

	for (arg_count = 0; arg_count < argc; arg_count++)
	{
		printf("%s\n", argv[arg_count]);
		for (i = 0; argv[arg_count][i] != '\0'; i++)
		{	if (isdigit(argv[arg_count][i]))
				printf("%c is a digit\n", argv[arg_count][i]);
			else
				printf("%c is a CHAR\n", argv[arg_count][i]);
		}
	}
	return (0);
}
