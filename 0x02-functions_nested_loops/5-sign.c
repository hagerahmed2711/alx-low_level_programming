#include "main.h"

/**
 * print_sign - prints the sign of a number.
 *
 * @n: the input number
 *
 * Return: 1 if n is a greater than 0, 0 if n is 0, and -1 if n is negative.
 *
*/

int print_sign(int n)
{
	if (n > 0)
	{	
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else (n < 0)
	{
		_putchar('-');
		return (-1);
	}

}
