#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * Return: last digit
 */

int print_last_digit(int l)
{
	int ld;

	ld = l % 10;

	if (ld < 0)
	{
		_putchar(-ld + 48);
		return (-ld);
	}
	else
	{
		_putchar(ld + 48);
		return (ld);
	}
}
