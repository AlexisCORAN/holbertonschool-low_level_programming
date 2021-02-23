#include "holberton.h"
/**
* _strpbrk - calculates the length of the initial segment of *s which
* consists entirely of characters in string *accept.
*
*@s: This is the main C string to be scanned.
*@accept: This is the string containing the list of characters to match in *s.
*
*Return:  the number of characters in the initial segment of *s which consist
* only of characters from *accept.
*/
char *_strpbrk(char *s, char *accept)
{

	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
