#include "holberton.h"

/**
* print_rev - function that prints a string, in reverse.
*
*@s: string.
*/
void print_rev(char *s)
{
	int len = 0;
	int rev;

	while (s[rev++])
		len++;

	for (rev = len - 1; rev >= 0; rev--)
	{
		_putchar(s[rev]);
	}
	_putchar('\n');
}
