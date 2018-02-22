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
	char *operator;
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	operator = argv[2];

	if ((*operator != '+' && *operator != '-' &&
	    *operator != '*' && *operator != '/' && *operator != '%')
	    || argv[2][1] != '\0')
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
	printf("%d\n", result);
	return (0);
}
