#include "holberton.h"
/**
* times_table - prints the 9 times table, starting with 0
*/
void times_table(void)
{
	int row;
	int col;
	int pd;
	int ds;
	int us;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			pd = row * col;
			ds = pd / 10;
			us = pd % 10;
			if (col == 0)
			{
				_putchar('0' + pd);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				if (pd < 10)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('0' + ds);
				}
					_putchar('0' + us);
			}
		}
		_putchar('\n');
	}
}
