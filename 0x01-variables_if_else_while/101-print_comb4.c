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
	int iii;

	for (i = 0 ; i < 10 ; i++)
	{
		for (ii = 1 ; ii < 10 ; ii++)
		{
			for (iii = 2 ; iii < 10 ; iii++)
			{
				if (i < ii && ii < iii)
				{
					putchar(i + '0');
					putchar(ii + '0');
					putchar(iii + '0');

					if (i + ii + iii != 24)
					{
					putchar(',');
					putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
