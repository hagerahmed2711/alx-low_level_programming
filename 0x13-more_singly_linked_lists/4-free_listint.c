#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: head of a list.
 *
 * Return: void.
 */

void free_listint(listint_t *head)
{
	listint_t *temp_node;

	while ((temp_node = head) != NULL)
	{
		head = head->next;
		free(temp_node);
	}
}