#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 *
 * @size: is the size of the triangle.
 *
*/

void print_triangle(int size)
{
	int high, base;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (high = 1; high <= size; high++)
		{
			for (base = 1; base <= size; base++)
			{
				if ((high + base) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
