#include "main.h"

/**
 * _memset - fill memory with constant byte
 *
 * @s: parameter for pointer
 * @b: parameter for constant byte
 * @n: parameter for byte number
 *
 * Return: 0 (Success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		s[i] = b;
	return (s);
}
