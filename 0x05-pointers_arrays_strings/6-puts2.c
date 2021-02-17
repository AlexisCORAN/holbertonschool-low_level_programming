#include "holberton.h"

/**
* puts2 - function that prints every other character of a string.
* @str: character of a string.
*/
void puts2(char *str)
{
	int i = 0;
	int len = 0;

	while (str[i++])
		len++;

	for (i = 0; i < len; i += 2)
		_putchar(str[i]);

		_putchar('\n');
}
