#include "holberton.h"

/**
* binary_to_uint - function that converts a binary number to an unsigned int.
*
*@b: pointer to a string of 0 and 1 chars.
*
* Return: the converted number.
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int i, len = 0;
	int mult = 1;
	char ch_actual;

	if (b == NULL)
		return (0);

	len = _strlen(b);

	for (i = len - 1; i >= 0; i--)
	{
		ch_actual = b[i];
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (ch_actual == '1')
		{
			decimal += mult;
		}

		mult *= 2;
	}
	return (decimal);
}

/**
* _strlen - function returns the length of a string.
*
*@s: pointer to a string.
*
* Return: length of a string.
*/

int _strlen(const char *s)
{
	int c = 0;

	while (s[c])
		c++;

	return (c);
}
