#include <stdio.h>


/**
* main - print alphabet with exceptions q and e
*
* Return: 0 is success
*/
int main(void)
{
	int letter;

	letter = 'a';
	while (letter <= 'z')
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar (letter);
		}
		letter++;
	}
	putchar ('\n');
	return (0);
}
