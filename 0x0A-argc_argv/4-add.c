#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - Write a program that adds positive numbers.
*
*@argc: counts the number of arguments.
*	It counts the file name as the first argument.
*
*@argv: contains the total number of arguments.
*	The first argument is the file name always.
*
*Return: 0 is success.
*/

int main(int argc, char *argv[])
{
	int num, digit;
	int sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit]; digit++)
		{
			if (isdigit(argv[num][digit]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[num]);
	}

	printf("%d\n", sum);
	return (0);
}
