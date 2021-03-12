#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_numbers - function that prints numbers, followed by a new line.
*
* @separator: separator
*
* @n: numbers
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg_numb;

	va_start(arg_numb, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg_numb, int));
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");

	va_end(arg_numb);
}
