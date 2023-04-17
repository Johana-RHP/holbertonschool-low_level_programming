#include "lists.h"

/**
 * print_dlistint - Print all the elements of a doubly linked list
 * @h: Address of linked list
 *
 * Return: Number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	int node_counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		node_counter++;
		h = h->next;
	}

	return (node_counter);
}
