#include "main.h"

/**
 * alloc_grid - pointer to two dimensional array of integers
 * @width: parameter for width
 * @height: parameter for height
 *
 * Return: pointer to array or NULL
 */
int **alloc_grid(int width, int height)
{
	int **arr, i, ii;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = (int **)malloc(sizeof(int *) * (height));

	if (arr == NULL)
		return (NULL);

	for (i = 0 ; i < height ; i++)
	{
		arr[i] = (int *)malloc(sizeof(int) * (width));

		if (arr[i] == NULL)
		{
			for (i = 0 ; i >= 0 ; i--)
				free(arr[i]);

			free(arr);

			return (NULL);
		}
	}

	for (i = 0 ; i < height ; i++)
	{
		for (ii = 0 ; ii < width ; ii++)
			arr[i][ii] = 0;
	}
	return (arr);
}
