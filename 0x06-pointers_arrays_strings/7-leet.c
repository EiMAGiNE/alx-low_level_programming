#include "main.h"

/**
 * leet - encode string
 *
 * @str: parameter to be encoded
 *
 * Return: string
 */

char *leet(char *str)
{
	int i;
	int ii;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		for (ii = 0 ; a[ii] != '\0' ; ii++)
		{
			if (str[i] == a[ii])
				str[i] = b[ii];
		}
	}
	return (str);
}
