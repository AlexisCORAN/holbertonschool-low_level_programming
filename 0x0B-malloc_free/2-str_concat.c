#include <stdlib.h>

/**
* str_concat - function that concatenates two strings.
*
*@s1 :string.
*
*@s2: second string to concatenate.
*
*Return: null or the string concatenate.
*/

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, c = 0, len = 0;

	if (s1 == NULL || s2 == NULL)
		s1 = s2 = "";

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
		len++;

	concat = malloc(sizeof(char) * len);

	if (concat == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		concat[c] = s1[i];
		c++;
	}

	for (i = 0; s2[i] != '\0'; i++)
	{
		concat[c] = s2[i];
		c++;
	}

	return (concat);
}
