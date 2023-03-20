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
	char Case;

	for (Case = 'a'; Case <= 'z'; Case++)
		if (Case != 'q' && Case != 'e')
			putchar(Case);
	putchar('\n');
	return (0);
}
