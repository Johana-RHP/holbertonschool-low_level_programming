#include "lists.h"

/**
 * dlistint_len - Count the elements on a double linked list.
 * @h: The head of the linked list
 *
 * Return: Number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int element_counter = 0;

	while (h != NULL)
	{
		element_counter++;
		h = h->next;
	}

	return (element_counter);
}
