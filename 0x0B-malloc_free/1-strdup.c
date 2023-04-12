#include "main.h"

/**
 * _strdup - duplicate string to newly allocated space in memory
 * @str: parameter to be duplicated
 *
 * Return: string or NULL
 */
char *_strdup(char *str)
{
	char *arr;
	int size, i;

	if (str == NULL)
		return (NULL);

	for (size = 0 ; str[size] != '\0' ; size++)

	arr = malloc(sizeof(char) * (size + 1));

	for (i = 0 ; str[i] ; i++)
		arr[i] = str[i];
	return (arr);
}
