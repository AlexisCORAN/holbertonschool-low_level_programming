#include "holberton.h"
/**
* print_alphabet - print the alphabet with the prototype _putchar
*
* Return: no explicit declaration necessary
**/
void print_alphabet(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		_putchar(letter++);
	}
	_putchar ('\n');
}
