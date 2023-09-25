#include "lists.h"

/**
 * free_linked_list - frees a linked list
 * @head: head of the linked list.
 *
 * Return: void.
 */
void free_linked_list(listp_t **head)
{
	listp_t *temp_node;
	listp_t *current_node;

	if (head != NULL)
	{
		current_node = *head;
		while ((temp_node = current_node) != NULL)
		{
			current_node = current_node->next;
			free(temp_node);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - prints a linked list.
 * @head: head of the linked list.
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t no_nodes = 0;
	listp_t *h, *new_node, *add_node;

	h = NULL;
	while (head != NULL)
	{
		new_node = malloc(sizeof(listp_t));

		if (new_node == NULL)
			exit(98);

		new_node->p = (void *)head;
		new_node->next = h;
		h = new_node;

		add_node = h;

		while (add_node->next != NULL)
		{
			add_node = add_node->next;
			if (head == add_node->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_linked_list(&h);
				return (no_nodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		no_nodes = no_nodes + 1;
	}

	free_linked_list(&h);
	return (no_nodes);
}
