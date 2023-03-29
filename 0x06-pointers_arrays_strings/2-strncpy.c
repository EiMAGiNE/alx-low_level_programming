#include "main.h"

/**
 * _strncpy - copy string
 *
 * @dest: parameter for destination
 * @src: parameter for source
 * @n: parameter to be copied
 *
 * Return: destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int n;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];
	return (dest);
}
