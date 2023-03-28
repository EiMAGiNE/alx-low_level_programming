#include "main.h"

/**
 * rev_string - reverse a string
 *
 * @s: parameter to be reversed
 *
 * Return: 0
 */

void rev_string(char *s)
{
	int i;
	int word = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		word++;
	for (i = word ; i >= 0 ; i--)
		 (s[i]);
}
