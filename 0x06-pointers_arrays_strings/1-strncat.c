#include "holberton.h"
/**
* _strncat - function that concatenates two strings.it will
* use at most n bytes from src; and
* src does not need to be null-terminated if it contains n or more bytes.
*
*@dest: string.
*
*@src: string.
*
*@n: bytes of string.
*
*Return: string concatenation.
*/
char *_strncat(char *dest, char *src, int n)
{

	int i, j;

	i = 0;

	while (dest[i] != '\0')
		i++;

	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[i + j] = src[j];

	dest[i + j] = '\0';
	return (dest);
}
