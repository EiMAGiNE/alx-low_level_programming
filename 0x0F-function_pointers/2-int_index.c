#include "function_pointers.h"

/**
 * int_index - search for an integer
 * @array: parameter for array
 * @size: parameter for number of element
 * @cmp: parameter for pointer to function
 *
 * Return: index of first element, or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0 ; i < size ; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
