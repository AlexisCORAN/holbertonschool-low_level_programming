#include "holberton.h"

/**
* _pow_recursion - function that returns the value
* of x raised to the power of y.
*
*@x: base number.
*
*@y:exponent.
*
*Return: -1 if y is lowet than 0, 1 if x or y are equal to 0.
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (x == 0 || y == 0)
	{
		return (1);
	}
	else
		return (x * _pow_recursion(x, y - 1));

}
