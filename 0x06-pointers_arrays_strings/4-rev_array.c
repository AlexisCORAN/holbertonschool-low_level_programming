#include "holberton.h"
/**
 * reverse_array - reverses the contents of an array of integers
 * @a: string
 * @n: number.
 */
void reverse_array(int *a, int n)
{
	int i;
	int j = n - 1;
	int temp;

	for (i = 0; i < n / 2; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
