#include "3-calc.h"

/**
 * main - execute calculation functions
 * @argc: count of arguments
 * @argv: arguments passed to function
 *
 * Return: Always 0. Exit otherwise
 */

int main(int argc, char *argv[])
{
	int a;
	int b;
	int i;
	int str_len;
	char *operator;
	int result;

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	operator = argv[2];

	for (i = 0; operator[i] != '\0'; i++)
		str_len++;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (*operator != '+' && *operator != '-' &&
	    *operator != '*' && *operator != '/' && *operator != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*operator == '/' || *operator == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = (get_op_func(operator)(a, b));
	printf("result: %d\n", result);
	return (0);
}
