#include "holberton.h"

/**
* _sqrt - find the natural square root of a number.
*
*@num: number.
*
*@root: the root to be checked.
*
*Return: if the number has a square root.
*/

int _sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (_sqrt(num, root + 1));
}

/**
* _sqrt_recursion - returns the natural square root of a number
*
*@n: the number.
*
*Return: returns -1, or 1.
*/

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (_sqrt(n, root));
}

