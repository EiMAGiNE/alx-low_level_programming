#include "main.h"

/**
 * _memcpy - copy memory area
 *
 * @dest: parameter for destination
 * @src: parameter for source
 * @n: parameter for byte number
 *
 * Return: pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];

	return (dest);
}
