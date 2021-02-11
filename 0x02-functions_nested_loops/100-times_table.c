#include "holberton.h"

void print_times_table(int n)
{
	int row;
	int col;
	int pd;

	if (n >= 0 && n <= 15)
	{
		for (row = 0; row <= n; row++)
		{
			_putchar('0');
			for (col = 1; col <= n; col++)
			{
				pd = row * col;
				if (col == 0)
				{
					_putchar('0' + (row + col));
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					if (pd < 10)
					{
						_putchar(' ');
						_putchar(' ');
					}
					else if (pd <= 99)
					{
						_putchar(' ');
						_putchar('0' + (pd / 10));
					}
					else if (pd >= 100)
					{
						_putchar('0' + (pd / 100));
						_putchar(((pd / 10) % 10) + '0');
					}
					_putchar('0' + (pd % 10));
				}
			}
			_putchar('\n');
		}
	}
}
