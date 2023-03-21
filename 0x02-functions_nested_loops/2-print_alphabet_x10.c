#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i;
	int ii;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (ii = 97 ; ii <= 122 ; ii++)
		{
			_putchar(ii);
		}
		_putchar('\n');
	}
}
