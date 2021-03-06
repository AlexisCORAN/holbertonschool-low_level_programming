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
	unsigned int i = 0, j = 0, c = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	if (j > n)
		j = n;

	concat = malloc(sizeof(char) * (i + j + 1));

	if (concat == NULL)
		return (NULL);

	for (c = 0; c < i; c++)
		concat[c] = s1[c];

	for (c = 0; c < j; c++)
		concat[c + i] = s2[c];

	concat[i + j] = '\0';

	return (concat);
}
