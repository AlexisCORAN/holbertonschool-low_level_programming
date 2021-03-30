#include "holberton.h"

/**
* get_bit - function that returns the value of a bit at a given index.
*
*@n: the number.
*
*@index: is the index, starting from 0 of the bit you want to get.
*
*Return: the value of the bit at index index or -1 if an error occured.
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int k;

	if (index > 64)
		return (-1);

	for (k = 0 ; k < index; k++)
	{}

	return ((n >> index) & 1);
}
