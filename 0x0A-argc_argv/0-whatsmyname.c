#include <stdio.h>

/**
* main - program that prints its name, followed by a new line.
*
*@argc: refers to the number of command line arguments.
*
*@argv: contains the actual arguments.
*
*Return: 0 is success.
*/

int main(int __attribute__((unused)) argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
