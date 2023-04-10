#include <stdio.h>

/**
 * main - print program number of arguments
 * @argc: parameter for argument number
 * @argv: parameter for array of command
 * Return: 0 (Success)
 */

int main(int argc, char *argv[]  __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
