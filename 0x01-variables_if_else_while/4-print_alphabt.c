#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char Case, e, q;

	for (Case = 'a'; Case <= 'z'; Case++)
		if (Case != 'e' && Case != 'q')
			putchar(Case);
	putchar('\n');
	return (0);
}
