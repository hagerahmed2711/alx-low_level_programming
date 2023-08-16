#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 *
 * @n: the input number
 *
 * Return: the value of the last digit.
 *
*/

int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
		lastDigit = -1 * (n % 10);
	else
		lastDigit = n % 10;
	_putchar('lastDigit');
	return (lastDigit);

}

