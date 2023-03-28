#include "main.h"

/**
 * swap_int - swap 2 values
 *
 * @a: parameter 1
 * @b: paramter 2
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
