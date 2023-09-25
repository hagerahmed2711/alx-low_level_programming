#include "lists.h"

/**
 * print_listint - returns the number of elements in a
 * linked listint_t list
 *
 * @h: linked list of type listint_t to print
 *
 * Return: the number of elements in a linked list
 */
size_t print_listint(const listint_t *h)
{
    size_t number = 0;

    while (h)
    {
        printf("%d\n", h->num);
        number++;
        h = h->next;
    }

    return (number);
}
