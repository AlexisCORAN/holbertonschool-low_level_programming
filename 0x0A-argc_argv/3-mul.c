#include <stdio.h>
#include <stdlib.h>

/**
* main - Write a program that prints all arguments it receives.
*
*@argc: counts the number of arguments.
*	It counts the file name as the first argument.
*
*@argv: contains the total number of arguments.
*	The first argument is the file name always.
*
*Return: 0 is success.
*/

int main(int __attribute__((unused)) argc, char *argv[])
{
	int num1, num2, product;

	if (((argv[1]) && (argv[2])) == 0)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 =  atoi(argv[1]);
		num2 = atoi(argv[2]);

		product = num1 * num2;
		printf("%d\n", product);
	}

	return (0);
}
