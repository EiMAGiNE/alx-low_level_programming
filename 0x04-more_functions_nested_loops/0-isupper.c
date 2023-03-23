#include "main.h"

/**
 * _isupper - Entry point
 *
 * @x: parameter to be checked
 *
 * Return: 0 (Success)
 */

int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	else
		return (0);
}
