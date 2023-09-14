#include "variadic_functions.h"

/**
 * sum_them_all - adds all the numbers
 * @n: the number of parameters.
 * Return: Always 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int s;
	unsigned int i;
	va_list a;

	va_start(a, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		s += va_arg(a, int);

	va_end(a);

	return (s);
}
