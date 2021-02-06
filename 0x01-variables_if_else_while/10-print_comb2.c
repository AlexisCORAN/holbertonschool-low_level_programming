#include <stdio.h>


/**
 * main - Prints the numbers from 00 to 99
 *
 * Return: 0 is success
 */
int main(void)
{
	int num1;
	int num2;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = 0; num2 < 10; num2++)
		{
			putchar((num1 % 10) + '0');
			putchar((num2 % 10) + '0');

			if (num1 == 9 && num2 == 9)
				break;
			
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
