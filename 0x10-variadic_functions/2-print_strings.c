#include "variadic_functions.h"

/**
 * print_strings - print strings, followed by a new line
 * @separator: parameter for dtrings to be printed
 * @n: parameter for number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;
	va_list list;

	va_start(list, n);

	for (i = 0 ; i < n ; i++)
	{
		str = va_arg(list, char *);

		if (!str)
			printf("nil");
		else if (separator && i == 0)
			printf("%s", str);
		else
			printf("%s%s", separator, str);
	}
	printf("\n");
	va_end(list);
}
