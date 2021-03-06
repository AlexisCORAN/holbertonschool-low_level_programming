#include "holberton.h"
#include <stdlib.h>

/**
* array_range - function that creates an array of integers.
*
*@min: first value.
*
*@max: last value.
*
*Return: the pointer to the newly created array.
*/

int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
		return (NULL);

	array = malloc(((max - min) + 1) * sizeof(int));

	if (array == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		array[i] = min++;

	return (array);
}
