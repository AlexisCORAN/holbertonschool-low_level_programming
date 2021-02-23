#include "holberton.h"

/**
* _strchr - find the first occurrence of a character in a string.
*
*@s: The string in which the character is searched.
*@c: The character that is searched in the string
*
*Return: a pointer to the first occurrence of the character
*in the string, or NULL if the character is not found.
*
*/
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			break;
		s++;
	}

	if (*s == c)
		return (s);
	else
		return ('\0');
}
