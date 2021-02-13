#include "holberton.h"

/**
 * print_square - prints a square, followed by a new line.
 * @size: The size of the square.
 */
void print_square(int size)
{
	int row, column;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (column = 0; column < size; column++)
				_putchar('#');

			if (row == size - 1)
				continue;
			_putchar('\n');
		}
	}

	_putchar('\n');
}
