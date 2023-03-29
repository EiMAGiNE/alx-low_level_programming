#include "main.h"

/**
 * reverse_array - reverse integers
 *
 * @a: parameter reverse
 * @n: parameter numbere
 *
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i;
	int ii;

	for (i = 0 ; i < n/2 ; i++)
	{
		ii = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = ii;
	}
}
