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
	int i = 0;

	for (!(str[i] >= 'a' && str[i] <= 'z'))
	{
		for (i = 0 ; str[i] != '\0' ; i++)
		{
			if 	(str[i - 1] == ' ' ||
				str[i - 1] == '\t' ||
				str[i - 1] == '\n' ||
				str[i - 1] == ',' ||
				str[i - 1] == ';' ||
				srt[i - 1] == '.' ||
				str[i - 1] == '!' ||
				str[i - 1] == '?' ||
				str[i - 1] == '"' ||
				str[i - 1] == '(' ||
				str[i - 1] == ')' ||
				str[i - 1] == '{' ||
				str[i - 1] == '}' ||
				i == 0)

				str[i] = str[i] - 32;
				i++;
		}
	}
	return (str);
}
