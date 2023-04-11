#include "main.h"

/**
 * create_array - create array of chars
 * @size: parameter for size allocated
 * @c: parameter for character
 *
 * Return: pointer to array or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int count = 0;

	if (size == 0)
		return (NULL);

	arr = (char *)(malloc(size * sizeof(char)));

	while (count < size)
	{
		arr[count] = c;
		count++;
	}
	return (arr);
}
