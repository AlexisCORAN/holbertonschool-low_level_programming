#include <stdio.h>


/**
* main - print all the numbers of a digit in base 10
*
* Return: 0 is success
*/
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	putchar('\n');
	return (0);
}
