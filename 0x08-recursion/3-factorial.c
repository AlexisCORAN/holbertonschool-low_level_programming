#include "holberton.h"

/**
* factorial - function that returns the factorial of a given number.
*
*@n: number to evaluate.
*
*Return: -1 is error, factorial of 0 is 1.
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
