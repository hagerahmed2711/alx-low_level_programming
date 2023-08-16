#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 *
 * @c: the character to be print
 *
 * Return:1 on success and -1 on error.
 *
 */


int _putchar(char c)
{
	return (write(1, &c, 1));
}
