#include "function_pointers.h"
#include <stdlib.h>

/**
* array_iterator - function that executes a function given as
* a parameter on each element of an array.
*
*@array: pointer of array.
*
*@size: is size of array.
*
*@action: is a pointer to the function you need to use.
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (size < 0)
		return;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size ; i++)
	{
		action(array[i]);
	}
}
