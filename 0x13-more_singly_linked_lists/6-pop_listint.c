#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: the head of the list
 *
 * Return: the head of the node's data,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp_node;
	int number;

	if (!head || !*head)
		return (0);

	number = (*head)->n;
	temp_node = (*head)->next;
	free(*head);
	*head = temp_node;
	return (number);
}
