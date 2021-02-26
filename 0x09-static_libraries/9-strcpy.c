#include "holberton.h"

/**
* _strcpy - function that copies the string.
*
* @dest: A buffer to copy the string to.
* @src: The source string to copy.
*
* Return: the pointer to dest.
*/
char *_strcpy(char *dest, char *src)
{
	int index;

	for (index = 0; src[index] != '\0'; index++)
		dest[index] = src[index];
	dest[index] = '\0';
	return (dest);
}
