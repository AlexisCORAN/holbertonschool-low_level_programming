#include "holberton.h"
/**
* _islower - check character is lowercase
*
* @c: the character to be checked
*
* Return: 0 is success
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
