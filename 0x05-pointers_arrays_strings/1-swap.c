#include "holberton.h"

/**
 * swap_int- swaps the values of two integers.
 * @a: been the first integer.
 * @b: been the second integer.
 *
 * Return:no return)
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
