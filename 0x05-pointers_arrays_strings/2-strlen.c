#include "main.h"

/**
 * _strlen - returns length of a string
 *
 * @s: paramenter to be retunred
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i;
	int length = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		length++;
	}
	return (length);
}
