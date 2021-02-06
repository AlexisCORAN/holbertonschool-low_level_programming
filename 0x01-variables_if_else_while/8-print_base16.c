#include <stdio.h>


/**
* main - print all base 16 numbers
*
* Return: 0 is success
*/
int main(void)
{
	int num;
	int letter;

	num = '0';
	letter = 'a';
	while (num <= '9')
	{
		putchar(num++);
	}
	while (letter <= 'f')
	{
		putchar(letter++);
	}
	putchar('\n');
	return (0);
}
