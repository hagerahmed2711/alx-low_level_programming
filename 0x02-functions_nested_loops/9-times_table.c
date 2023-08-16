#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 *
*/

void times_table(void)
{
	int i, j, product;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			product = i * j;
			if (product < 9)
				_putchar(' ');
			else
				_putchar('(product / 10)');
			_putchar('(product % 10)');
			_putchar(',');
			_putchar(' ')
		}
		_putchar('\n');
	}
}

