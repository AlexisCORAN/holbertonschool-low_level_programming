#include <stdio.h>


/**
* main - program to print with if function
*
* Return: 0 is success
*/
int main(void)
{
	int letter;

	letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter--);
	}
	putchar('\n');
	return (0);
}
