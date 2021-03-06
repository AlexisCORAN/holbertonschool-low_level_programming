#include "holberton.h"
#include <stdlib.h>

/**
* _calloc - function that allocates memory for an array.
*
*@nmemb: array.
*
*@size: size of bytes.
*
*Return: pointer to the allocated memory.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size),i++)
		p[i] = '\0';

	return (p);
}
