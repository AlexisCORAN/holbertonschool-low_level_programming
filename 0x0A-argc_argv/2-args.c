#include <stdio.h>

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

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
