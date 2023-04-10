#include <stdio.h>

/**
 * main - print all arguments recieved
 * @argc: parameter for argument number
 * @argv: parameter for array of command
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
