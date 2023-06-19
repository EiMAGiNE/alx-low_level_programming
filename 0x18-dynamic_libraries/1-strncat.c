#include "main.h"

/**
 * _strncat - concatenate 2 strings with condition
 *
 * @dest: parameter for destination
 * @src: parameter for source
 * @n: parameter for condition
 *
 * Return: destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int destlen = 0;
	int srclen = 0;

	for (i = 0 ; dest[i] != '\0' ; i++)
		destlen++;
	for (i = 0 ; src[i] != '\0' ; i++)
		srclen++;
	for (i = 0 ; i < n ; i++)
		dest[destlen + i] = src[i];
	return (dest);
}
