#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: the header os the list
 *
 * Return: the size of the list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	int difference;
	listint_t *temp_node;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		difference = *h - (*h)->next;
		if (difference > 0)
		{
			temp_node = (*h)->next;
			free(*h);
			*h = temp_node;
			length = length + 1;
		}
		else
		{
			free(*h);
			*h = NULL;
			length = length + 1;
			break;
		}
	}

	*h = NULL;

	return (length);
}
