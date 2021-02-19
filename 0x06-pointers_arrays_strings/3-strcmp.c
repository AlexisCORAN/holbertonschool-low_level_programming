#include "holberton.h"

/**
* _strcmp - function that compares two strings.
*
*@s1: string.
*
*@s2: string.
*
*Return: numbers.
*/
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;

	while (s1[i] == s2[i] && s1[i] == '\0')
	{
		i++;
	}

	if (s1[i] < s2[i])
	{
		return (-15);
	}
	else if (s1[i] > s2[i])
	{
		return (15);
	}
	else
	{
		return (0);
	}
}
