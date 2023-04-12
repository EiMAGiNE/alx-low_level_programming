#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: parameter for string 1
 * @s2: parameter for string 2
 *
 * Return: content of string 1 followed by 2, or NULL
 */
char *str_concat(char *s1, char *s2)
{
	int i, ii, len, len1, len2;
	char *str;

	len1 = len2 = 0;

	if (s1 != NULL)
	{
		i = 0;
		while (s1[i++] != '\0')
			len1++;
	}

	if (s2 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
			len2++;
	}

	len = len1 + len2;
	str = (char *)malloc(sizeof(char) * (len + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0 ; i < len1 ; i++)
		str[i] = s1[i];

	for (ii = 0 ; ii < len2 ; ii++)
		str[i] = s2[ii];
	str[len] = '\0';

	return (str);
}
