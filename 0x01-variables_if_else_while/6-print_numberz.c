#include <stdio.h>


/**
* main - print number of 1 single digit in base 10 with putchar
*
* Return: 0 is success
*/
int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num++);
	}
	putchar('\n');
	return (0);
}
