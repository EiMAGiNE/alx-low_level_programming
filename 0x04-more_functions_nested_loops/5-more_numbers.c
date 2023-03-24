#include "main.h"

/**
 * more_numbers - Entry point
 *
 * Return: 0 (Success)
 */

void more_numbers(void)
{
	int i, ii;

	for (i = 0 ; i < 10 ; i++)
	{
		for (ii = 0 ; ii <= 14 ; ii++)
		{
			if (ii > 9)
			{
				_putchar((ii / 10) + '0');
				_putchar((ii % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
