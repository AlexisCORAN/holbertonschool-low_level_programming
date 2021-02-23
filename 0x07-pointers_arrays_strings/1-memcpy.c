#include "holberton.h"

/**
* _memset - function copies n bytes from memory area src to memory area dest.
* @dest: This is pointer to the destination array where the content is to be copied.
*
* @src: This is pointer to the source of data to be copied.
* @n: This is the number of bytes to be copied.
*
* Return: returns a pointer to destination.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		src[index] = dest[index];
	}
	src[index] = '\0';
	return (dest);
}
