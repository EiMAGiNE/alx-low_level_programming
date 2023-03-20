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

	for (i = 0 ; i < 10 ; i++)
	{
		for (ii = 1 ; ii < 10 ; ii++)
		{
			if (i < ii && i != ii)
			{
				putchar(i + '0');
				putchar(ii = '0');

					if (i + ii != 17)
					{
						putchar(',');
						putchar(' ');
					}
			}
		}
	}
		putchar('\n');
		return (0);
}
