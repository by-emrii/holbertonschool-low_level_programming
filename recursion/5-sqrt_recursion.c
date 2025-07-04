#include "main.h"
/**
 * sqrt_calc - calc square root
 * @n: number to find square root
 * @i: current num to find
 * Return: square root or -1
 */
int sqrt_calc(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i > n)
		return (-1);
	return (sqrt_calc(n, i + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find square root of
 * Return: num
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_calc(n, 0));
}
