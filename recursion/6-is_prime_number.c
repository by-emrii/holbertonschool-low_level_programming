#include "main.h"
/**
 * prime_calc - calc if n is prime
 * @n: number to find if prime
 * @i: divisor
 * Return: 1 if prime, 0 if not
 */
int prime_calc(int n, int i)
{
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);
	return (prime_calc(n, i + 1));
}

/**
 * is_prime_number -function that returns 1 if n is prime num
 * @n: number to check
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_calc(n, 2));
}
