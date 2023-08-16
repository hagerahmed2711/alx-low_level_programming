#include "main.h"

/**
 * _abs - prints the absloute value of a number.
 *
 * @n: the input number
 *
 * Return: the absolute value.
 *
*/

int _abs(int n)
{
	if (n < 0)
		n = n * (-1);
	return (n);

}

