#include "main.h"

/**
 * print_diagonal - Entry point
 *
 * @n: parameter prints line
 *
 * Return: 0 (Success)
 */

void print_diagonal(int n)
{
	int i, ii;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0 ; i < n ; i++)
		{
			for (ii = 0 ; ii < i; ii++)
			{
				_putchar(32);
			}
			_putchar(92);
		}
		_putchar('\n');
	}
}
