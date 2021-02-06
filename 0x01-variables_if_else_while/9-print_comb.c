#include <stdio.h>


/**
* main - program to print with if function
*
* Return: 0 is success
*/
int main(void)
{
	int num;
	num = '0';

	while (num <= '9')
	{
		putchar(num);
		if (num != '9')
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
