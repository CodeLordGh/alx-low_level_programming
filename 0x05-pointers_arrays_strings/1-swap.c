#include "main.h"

/**
 * swap_int - swapping
 *
 * @a: int 1
 * @b: int 2
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int k;

	k = *a;
	*a = *b;
	*b = k;
}
