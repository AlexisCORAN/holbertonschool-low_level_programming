#include <stdio.h>

/**
* main - program that prints the number of arguments passed into it.
*
*@argc: counts the number of arguments. It counts the file
*	name as the first argument.
*
*@argv:  contains the total number of arguments.
*	The first argument is the file name always.
*
*Return: 0 is success.
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
