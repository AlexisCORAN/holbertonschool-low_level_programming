#include "holberton.h"

/**
* _memset - fills the first n bytes of the memory
area pointed to by s with the constant byte b.
* @s: This is a pointer to the block of memory to fill.
* @b: is the character to be set.
* @n: This is the number of bytes to be set to the value.
*
* Return: eturns a pointer to the memory area s.
*/
char  *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; s[index] != '\0' || index < n; index++)
	{
		s[index] = b;
	}
	return (s);
}
