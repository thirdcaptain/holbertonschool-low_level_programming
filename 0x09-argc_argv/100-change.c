#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the mininum coins to make change
 * @argc: Number of arguments
 * @argv: Arguments passed to main
 *
 * Return: 0 if success, 1 if error
 */
int main(int argc, char *argv[])
{
	int value, coin_count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	value = atoi(argv[1]);
	if (value <= 0)/*there was ; here, madison found it!*/
	{
		printf("0\n");
		return (0);
	}
	while (value >= 25)
	{
		value = value - 25;
		coin_count++;
	}
	while (value >= 10)
	{
		value = value - 10;
		coin_count++;
	}
	while (value >= 5)
	{
		value = value - 5;
		coin_count++;
	}
	while (value >= 2)
	{
		value = value - 2;
		coin_count++;
	}
	while (value >= 1)
	{
		value = value - 1;
		coin_count++;
	}
	printf("%d\n", coin_count);
	return (0);
}
