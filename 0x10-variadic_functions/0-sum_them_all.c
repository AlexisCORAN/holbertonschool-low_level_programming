#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -  function that prints numbers, followed by a new line.
 * @n:  numbers
 *
 * Return: sum of the numbers.
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int  i = 0;
	va_list arguments;

	if (n == 0)
		return (0);

	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(arguments, int);
	}

	va_end(arguments);

	return (sum);
}
