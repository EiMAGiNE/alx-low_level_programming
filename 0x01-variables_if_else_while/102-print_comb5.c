#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int i;
	int ii;

	for (i = 0 ; i <= 99 ; i++)
	{
		for (ii = 1 ; ii <= 99 ; ii++)
		{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar(' ');
			putchar(ii / 10 + '0');
			putchar(ii % 10 + '0');

			if (i == 98 && ii == 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
