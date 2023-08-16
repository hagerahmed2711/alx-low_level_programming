#include "main.h"

/**
 * _islower - checks for lowercase character.
 *
 * @c: is the checked character
 *
 * Return: 0 if c is lowercase and 1 if not
 *
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);

}
