#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: the given string.
 *
 * Return: NULL if str = NULL
On success, the _strdup function returns a pointer to the duplicated string.
It returns NULL if insufficient memory was available
 *
 *
*/

char *_strdup(char *str)
{
	char *newString;
	int i, size = 0;

	if (str == NULL)
		return (NULL);
	while (str[size] != '\0')
		size++;
	newString = malloc((size * sizeof(*str)) + 1);
	if (newString == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		newString[i] = str[i];
	return (newString);
}
