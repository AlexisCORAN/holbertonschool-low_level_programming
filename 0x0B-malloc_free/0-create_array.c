#include "holberton.h"
#include <stdlib.h>

/**
* create_array - unction that creates an array of chars.
*
*@size: is the number of bytes your need to allocate.
*
*@c: char.
*
*Return: returns null or pointer to the array.
*/

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
			array[i] = c;
			return (array);
	}
}
