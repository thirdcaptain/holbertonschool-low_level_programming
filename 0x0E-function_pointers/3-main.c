#include "3-calc.h"

/**
 * main - execute calculation functions
 *
 * Return: Always 0.
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

	result = (get_op_func(operator)(a, b));
	printf("result: %d\n", result);
	printf("a: %d, b: %d operator: %s, argc: %d\n", a, b, operator, argc);
	return (0);
}
