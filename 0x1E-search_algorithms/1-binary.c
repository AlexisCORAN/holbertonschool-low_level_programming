#include <stdio.h>
#include "search_algos.h"
#include <stdlib.h>

/**
 * binary_search - searches for a value in an array of integers using
 * the Binary search algorithm
 *
 * @array: pointer to the interger array to search through
 *
 * @size: number of elements in array
 *
 * @value: value to search for in array
 *
 * Return: returns index or -1.
 *
*/

int binary_search(int *array, size_t size, int value)
{
	int s = size;
	int i, low = 0, high = s - 1, mid;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i < high; i++)
			printf("%i, ", array[i]);
		printf("%i\n", array[i]);
		mid = (low + high) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			high = mid - 1;
		else
			low = mid + 1;
	}
	return (-1);
}
