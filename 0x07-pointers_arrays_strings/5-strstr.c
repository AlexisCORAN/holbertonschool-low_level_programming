#include "holberton.h"

/**
*
*
*
*
*
*
*/

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while ((haystack[j] != '\0') && (needle[i] != '\0'))
	{
		if (needle[i] != haystack[j])
		{
			j++;
		}
		else
		{
			i++;
			j++;
		}
	}

	if ( needle[i] != haystack[j])
		return ('\0');
	else
		return (needle);
}
