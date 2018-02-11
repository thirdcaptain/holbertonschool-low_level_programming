#include "holberton.h"

/**
 * calc_prime - calculates if a number is prime
 * @i: number to calculate prime
 * @num: Number to determine if prime
 *
 * Return: 1 if n is prime, 0 otherwise.
 */

int calc_prime(int i, int num)
{
	if (i == 2)
		return (1);
	if (num % i == 0)
		return (0);
	return (calc_prime(i - 1, num));
}

/**
 * is_prime_number - returns 1 if input integer is a prime number
 * @n: Number to determine if prime.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */

int is_prime_number(int n)
{
	int number = n - 1;

	if (n == 2)
		return (1);
	if (n < 2)
		return (0);
	return (calc_prime(number, n));
}
