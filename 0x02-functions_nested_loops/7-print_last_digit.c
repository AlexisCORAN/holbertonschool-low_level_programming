# include "holberton.h"
/**
* print_last_digit - check the last digit
*
* @n: the character to be checked
*
* Return: 0
*/
int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
	{
		ld *= -1;
	}
	_putchar(ld + '0');
	return (ld);
}
