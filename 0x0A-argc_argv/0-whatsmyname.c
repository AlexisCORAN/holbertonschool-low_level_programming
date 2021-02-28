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
		printf("%s\n", argv[0]);
	return (0);
}
