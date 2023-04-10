#include <stdio.h>

/**
 * main - print program name followed by new line
 * @argc: parameter for argument count
 * @argv: parameter for array of command
 * Return: 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
