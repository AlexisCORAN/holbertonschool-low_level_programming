#include "holberton.h"
/**
* _strspn - calculates the length of the initial segment of *s which
* consists entirely of characters in string *accept.
*
*@s: This is the main C string to be scanned.
*@accept: This is the string containing the list of characters to match in *s.
*
*Return:  the number of characters in the initial segment of *s which consist
* only of characters from *accept.
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int counter = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				counter++;
				break;
			}
		}
		if (accept[j] == '\0')
			return (counter);
	}
	return (counter);
}
