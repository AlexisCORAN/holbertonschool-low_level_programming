#include "holberton.h"

/**
* _isdigit - checks for a digit 
*
* @c: the character to be checked
* Return: 0 or 1 as required
*/
int _isdigit(int c)
{
        if (c >= 48 && c <= 57)
        {
                return (1);
        }
        else
        {
                return (0);
        }
}

