#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 *
 * @n: max bytes to use
 * @b:constant
 * @s: pointer to put the constrant
 * Return: a pointer to the memory area s.
 *
*/


char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
