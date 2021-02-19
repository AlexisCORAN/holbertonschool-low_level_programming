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
	if  (s1 == s2)
		return (0);

	while (s1[i] == s2[i] && s1[i] && s1[i] && s2[i])
		i++;

	if (s1[i] > s2[i])
		return (s1[i] - s2[i]);
	else if (s1[i] < s2[i])
		return (-(s2[i] - s1[i]));
	else
		return (0);
}
