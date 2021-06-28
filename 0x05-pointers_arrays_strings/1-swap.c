#include "holberton.h"

/**
 * void swap_int- swaps the values of two integers.
 * @a and @b : been the input values.
 *
 * Return:no return)
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
