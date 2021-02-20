#include "holberton.h"
/**
* leet - function that encodes a string into 1337.
*
*@str:string
*
*Return: encodes a string.
*/
char *leet(char *str)
{
	int i, j;

	char letters[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char numbers[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; str[i] != '\0'; i++)
	{
		if ( str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' ||
		    str[i] == 'o' || str[i] == 'O' || str[i] == 't' || str[i] == 'T' ||
		    str[i] == 'l' || str[i] == 'L')
		{
			for (j = 0;str[i] != letters[j]; j++)
			{}
				str[i] = numbers[j];
		}
	}
	return (str);

}
