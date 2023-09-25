#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: the head of the list
 * @index: index of the node starting at 0
 *
 * Return: pointer to the nth node of the linked list, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp_node = head;

	while (temp_node && i < index)
	{
		temp_node = temp_node->next;
		i = i + 1;
	}
	return (temp_node ? temp_node : NULL);
}
