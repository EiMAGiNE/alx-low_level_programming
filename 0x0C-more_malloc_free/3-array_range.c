#include "main.h"

/**
 * array_range - create an array of integers
 * @min: parameter for minimum value
 * @max: parameter for maximum value
 *
 * Return: pointer to newly created array or NULL
 */
int *array_range(int min, int max)
{
	int *i, ii;

	if (min > max)
		return (NULL);

	i = malloc(sizeof(i) * ((max - min) + 1));

	if (i == NULL)
		return (NULL);

	for (ii = 0 ; min <= max ; ii++, min++)
		i[ii] = min;

	return (i);
}
