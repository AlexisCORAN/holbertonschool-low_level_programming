#include "holberton.h"
/**
* swap_int - function that swaps the values of two integers.
*
*@a: number to check.
*
*@b: number to check.
*/
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
