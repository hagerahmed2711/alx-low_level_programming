#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 *
 * @size: is the size of the triangle.
 *
*/

void print_triangle(int size)
{
	int row, column;

	if (size <= 0)
		_putchar('\n');
	else if (size == 1)
	{
		_putchar('#');
		_putchar('\n');
	}
	else
	{
		for (row = 0; row < size; row++)
		{
			for (column = 0 ; column < (size - 1) ; column++)
				_putchar(' ');
			_putchar('#');
			_putchar('\n');
		}
		_putchar('\n');
	}
}

