#include "main.h"

/**
 * puts2 - print every other character
 *
 * @str: parameter to be printed
 *
 * Return: 0
 */

void puts2(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
