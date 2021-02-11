#include "holberton.h"

void print_times_table(int n)
{
	int row;
	int col;
	int pd;
	int cs;
	int ds;
	int us;
	if (n >= 0 && n <= 15)
	{
		for (row = 0; row <= n; row++)
		{
			_putchar('0');
			for (col = 1; col <= n; col++)
			{
				pd = row * col;
				cs = pd / 100;
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
						_putchar(' ');
					}
					else if (pd <= 99)
					{
						_putchar(' ');
						_putchar('0' + ds);
					}
					else if (pd >= 100)
					{
						_putchar('0' + cs);
						_putchar((ds % 10) + '0');
					}
					_putchar('0' + us);
				}
			}
			_putchar('\n');
		}
	}
}
