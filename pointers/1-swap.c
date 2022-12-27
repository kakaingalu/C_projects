#include <stdio.h>

/**
 * swap_int - swap values
 * @a: the first parameter to swap
 * @b: the second parameter to swap
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *b;
	*b = *a;
	*a = swap;
}
