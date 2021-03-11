#include "function_pointers.h"
#include <stdio.h>

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL || size < 0 )
	{
		return;
	}

	for(i = 0;i < size; i++)
	{
		action(array[i]);
	}
}
