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
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (column = 1; column < size; column++)
			{
				if ((row + column) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
