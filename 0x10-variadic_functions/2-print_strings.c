#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
*print_strings - function that prints strings, followed by a new line.
*
*@separator: The string to be printed between strings.
*
*@n: number of strings.
*
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list arg_str;

	va_start(arg_str, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(arg_str, char *);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}

	printf("\n");

	va_end(arg_str);
}
