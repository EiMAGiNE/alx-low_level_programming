#include "main.h"

/**
 * positive_or_negative - Entry point
 *
 * @i: parameter to be checked
 *
 * Return: 0 (Success)
 */

void positive_or_negative(int i)

{
	if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is positive\n", i);
}
