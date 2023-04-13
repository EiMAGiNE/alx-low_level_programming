#include "main.h"

/**
 * _realloc - reallocate memory block
 * @ptr: parameter for pointer to memory
 * @old_size: parameter for size of allocated space
 * @new_size: parameter for new memory block
 *
 * Return: ptr or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
