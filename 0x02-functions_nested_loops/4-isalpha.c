#include "holberton.h"

/**
* _isalpha - check upper and lower case
*
* @c: the character to be checked
*
* Return: 0 is success
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
