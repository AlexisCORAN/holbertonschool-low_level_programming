#include "holberton.h"
#include <stdlib.h>

/**
* _strdup - function that returns a pointer to a newly allocated
*	space in memory, which contains a copy of the string given as a parameter.
*
*@str: string.
*
*Return: Null or duplicate string.
*/

char *_strdup(char *str)
{
	char *copy_array;
	int i;
	int len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		len++;

	copy_array =  malloc(sizeof(char) * (len));

	if (copy_array == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		copy_array[i] = str[i];

	copy_array[i] = '\0';

	return (copy_array);
}
