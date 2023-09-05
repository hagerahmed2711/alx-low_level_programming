#include "main.h"

/**
 * str_concat - concatenates two strings.
 *
 * @s1: the first input string
 * @s2: the second input string
 *
 * Return: apointer to the new string or NULL on failure.
 *
*/


char *str_concat(char *s1, char *s2)
{
	int size1 = 0, size2 = 0, i;
	char *newString;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';
	for (; s1[size1] != '\0'; size1++)
	;
	for (; s2[size2] != '\0'; size2++)
	;
	newString = malloc((size1 + size2) * sizeof(char) + 1);
	if (newString == 0)
		return (0);
	for (i = 0; i <= size1 + size2; i++)
	{
		if (i < size1)
			newString[i] = s1[i];
		else
			newString[i] = s2[i - size1];
	}
	newString[i] = '\0';
	return (newString);
}

