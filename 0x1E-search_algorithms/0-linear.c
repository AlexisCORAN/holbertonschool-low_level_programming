#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * linear_search - function that searches for a value
 * in an array of integers using the Linear search algorithm
 *
 *@array: Is a pointer to the first element of the array.
 *
 *@size: is the number of elements in array.
 *
 *@value:is the value to search for.
 *
 * Return: returns value or -1.
*/

int linear_search(int *array, size_t size, int value)
{
	int s = size;
	int i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < s; i++)
	{
		printf("Value checked array[%i] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
