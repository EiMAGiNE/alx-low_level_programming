#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Return: 0 (Success)
 * 
 */

int main(void)
{
	char Rcase;

	for (Rcase = 'z'; Rcase >= 'a'; Rcase--)
		putchar(Rcase);
	putchar('\n');

	return (0);
}
