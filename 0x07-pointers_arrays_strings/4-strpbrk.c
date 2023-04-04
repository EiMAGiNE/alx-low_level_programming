#include "main.h"

/**
 * _strpbrk - search string for any set of byte
 *
 * @s: parameter for string to be searched
 * @accept: parameter for set of bytes
 *
 * Return: matched byte or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i, ii;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (ii = 0 ; accept[ii] != '\0' ; ii++)
		{
			if (s[i] == accept[ii])
				return (s + i);
		}
	}
	return (NULL);
}
