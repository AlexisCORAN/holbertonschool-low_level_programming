#include "holberton.h"

/**
* _search_prime - find the prime number.
*
*@n:number
*
*@divisor: divisor number 2.
*
*Return: 0 or 1.
*/

int _search_prime(int n, int divisor)
{
	if ((n % divisor) == 0 && divisor != n)
		return (0);
	if ((n % divisor) == 0 && divisor == n)
		return (1);
	return (_search_prime(n, divisor + 1));
}

/**
* is_prime_number - returns the prime number.
*
*@n: number.
*
*Return: if the number has a prime.
*/

int is_prime_number(int n)
{
	int divisor = 2;

	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);
	return (_search_prime(n, divisor));
}
