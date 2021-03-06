#include "holberton.h"
#include <stdlib.h>

/**
* string_nconcat - function that concatenates two strings.
*
*@s1: string.
*
*@s2: string.
*
*@n:bytes of strings.
*
*Return: pointer shall point to a newly allocated space in memory.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, c = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	i = 0;
	while (s1[i] != '\0')
		i++;

	j = 0;
	while (s2[j] != '\0')
		j++;

	if (n > j)
		n = j;

	concat = malloc(sizeof(char) * (i + j + 1));

	if (concat == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		concat[c] = s1[i];
		c++;

	for (j = 0;  s2[j] != '\0' && j < n; j++)
		concat[c] = s2[j];
		c++;

	concat[c] = '\0';

	return (concat);
}
