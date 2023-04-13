#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: parameter for number of elements
 * @size: parameter for size of bytes
 *
 * Return: pointer to allocated memory or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	s = malloc(nmemb * size);

	if (s == NULL)
		return (NULL);

	for (i = 0 ; i < (nmemb * size) ; i++)
		s[i] = 0;

	return (s);
}
