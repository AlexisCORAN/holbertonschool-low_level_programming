#include "holberton.h"

char *_strcat(char *dest, char *src)
{
	int i, j;
	i = 0;
	j = 0;

	while (src[i] != '\0')
		i++;

	while (dest[j] != '\0')
		j++;
		src[i] = dest[j];

	dest[j] = '\0';
	return (dest);
}
