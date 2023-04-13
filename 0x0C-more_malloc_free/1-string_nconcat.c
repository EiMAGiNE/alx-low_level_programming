#include "main.h"

/**
 * string_nconcat - concatenate two strings
 * @s1: parameter 1 to concatenate
 * @s2: parameter 2 to concatenate
 * @n: parameter for byte
 *
 * Return: pointer to newly allocated space in memeory or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, ii, len1, len2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0 ; s1[i] != '\0' ; i++)

	for (ii = 0 ; s2[ii] != '\0' ; ii++)


	if (n > ii)
		n = ii;

	len1 = i + n;

	s = malloc(sizeof(char) * (len1 + 1));

	if (s == NULL)
		return (NULL);

	for (len2 = 0 ; len2 < len1 ; len2++)
		if (len2 < i)
			s[len2] = s1[len2];
		else
			s[len2] = s2[len2 - i];

	s[len2] = '\0';

	return (s);
}
