#include "main.h"

/**
 * print_square - Entry point
 *
 * @size: parameter to be printed
 *
 * Return: empty
 */

void print_square(int size)
{
	int i, ii;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0 ; i < size ; i++)
		{
		for (ii = 0 ; ii < size ; ii++)
		{
		_putchar(35);
		}
	_putchar('\n');
		}
	}
}
