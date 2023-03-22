#include "main.h"

/**
 * print_sign - Entry point
 *
 * @n: parameter is printed
 *
 * Return: 1 is greater than zero. 0 is zero. -1 is less than zero
 /

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		_putchar(',');
		_putchar(' ');
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		_putchar(',');
		_putchar(' ');
		return (-1);
	}
	else
	{
		_putchar(48);
		_putchar(',');
		_putchar(' ');
		return (0);
	}
	_putchar('\n');
}
