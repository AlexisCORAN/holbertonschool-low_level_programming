/**
* _strlen - function that returns the length of a string.
*
*@s: string.
*
*Return:  length of *s.
*/
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return (length);
}
