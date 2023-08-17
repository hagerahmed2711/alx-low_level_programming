#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 *
 * @n: the number of times the character \ should be printed
 *
 *
*/


void print_diagonal(int n)
{
	int space, sign;

	for (sign = 0; sign <= n; sign++)
	{
		for (space = 0; space < sign; space++)
			_putchar(' ');
		_putchar('\\');
	}
	_putchar('\n');
}

