#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char (c);
	int (i);
	long int (li);
	long long int (ll);
	float (f);

	printf("Size of a char: %zu byte(s)", sizeof(c));
	printf("Size of an int: %lu byte(s)", sizeof(i));
	printf("Size of a long int: %lu byte(s))", sizeof(li));
	printf("Size of a long long int: %lu byte(s)", sizeof(ll));
	printf("Size of a float: %lu byte(s)", sizeof(f));
	return (0);
}
