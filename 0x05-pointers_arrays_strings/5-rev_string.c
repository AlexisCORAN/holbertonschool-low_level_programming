#include "holberton.h"

/**
* _strlen - function that returns the length of a string.
*
*@s: string.
*
*Return:  length of *s.
*/

int _strlen(char *s)
{
	int length = 0;

	while (*s++ != '\0')
		length++;
	return (length);
}

/**
* rev_string - function that reverses a string.
*
*@s:string.
*/

void rev_string(char *s)
{
	int longitud, i;
	char ch;

	longitud = _strlen(s);

	for (i = 0; i < longitud / 2; i++)
	{
		ch = s[i];
		s[i] = s[longitud - i - 1];
		s[longitud - i - 1] = ch;
	}
}
