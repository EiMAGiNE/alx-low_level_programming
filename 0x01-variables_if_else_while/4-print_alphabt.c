#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char Case, e, q;

	e = 'e';
	q = 'q';

	for (Case = 'e'; Case <= 'z'; Case++)
	{
		if (Case != e && Case != q)
			putchar(Case);
	}
	putchar('\n');
	return (0);
}
