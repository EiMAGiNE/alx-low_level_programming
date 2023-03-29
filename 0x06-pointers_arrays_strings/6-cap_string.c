#include "main.h"

/**
 * cap_string - capitalize string
 *
 * @str: parameter to be capitalized
 *
 * Return: string
 */

char *cap_string(char *str)
{
	int i;

	for (str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] - 32;
	{
		for (i = 0 ; str[i] != '\0' ; i++)
		{
			str[i] == ' ' ||
			str[i] == '\t' ||
			str[i] == '\n' ||
			str[i] == ',' ||
			str[i] == ';' ||
			srt[i] == '.' ||
			str[i] == '!' ||
			str[i] == '?' ||
			str[i] == '"' ||
			str[i] == '(' ||
			str[i] == ')' ||
			str[i] == '{' ||
			str[i] == '}' ||
		}
	}
	return (str);
}
