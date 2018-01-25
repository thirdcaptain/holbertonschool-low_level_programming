#include "holberton.h"

void greater_than_100(int output, int b, int n);
void ten_to_99(int output, int b, int n);

/**
 * print_times_table - print the n time table, starting with 0
 * @n: The argument to determine range of times table
 */
void print_times_table(int n)
{

	int a;
	int b;
	int output;

	if (n <= 15 && n >= 0)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				output = a * b;
				if (b == 0)
				{
					_putchar('0');
					if (b == n)
						_putchar('\n');
				}
				else if (output < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(output % 10 + '0');
					if (b == n)
						_putchar('\n');
				}
				else if (output >= 10 && output < 100)
				{
					ten_to_99(output, b, n);
				}
				else if (output >= 100)
				{
					greater_than_100(output, b, n);
				}
			}
		}
	}
}

/**
 * greater_than_100 - outputs three digit numbers
 * @output: The number
 * @b: Second times operand
 * @n: Initial operand passed from main
 *
 */
void greater_than_100(int output, int b, int n)
{
	_putchar(',');
	_putchar(' ');
	_putchar(output / 100 + '0');
	_putchar((output / 10) % 10 + '0');
	_putchar(output % 10 + '0');
	if (b == n)
		_putchar('\n');
}

#include "holberton.h"
/**
 * ten_to_99 - outputs double digits
 * @output: The number
 * @b: Second times operand
 * @n: Initial operand passed from main
 *
 */
void ten_to_99(int output, int b, int n)
{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar(output / 10 + '0');
	_putchar(output % 10 + '0');
	if (b == n)
		_putchar('\n');

}
