#include "function_pointers.h"

/**
 * print_name - print a name
 * @name: parameter to be printed
 * @f: parameter for pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	else
		f(name);
}
