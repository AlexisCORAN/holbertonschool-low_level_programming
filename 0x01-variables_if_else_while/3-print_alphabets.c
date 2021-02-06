#include <stdio.h>


/**
* main - print lowercase and uppercase alphabet
*
* Return: 0 is success
*/
int main(void)
{
	int lower;
	int upper;

	lower = 'a';
	upper = 'A';
	while (lower <= 'z')
	{
		putchar(lower++);
	}
	while (upper <= 'Z')
	{
		putchar(upper++);
	}
	putchar ('\n');
	return (0);
}
