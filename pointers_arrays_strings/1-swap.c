#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: pointer to int
 * @b: pointer to int
 * Return:
 */
void swap_int(int *a, int *b)
{
	int save_a;

	save_a = *a;
	*a = *b;
	*b = save_a;
}
