#include "lists.h"

/**
 * list_len - Return the number of elements in a linked list
 * @h: Head of the list
 *
 * Return: The number of nodes
 */

size_t list_len(const list_t *h)
{
	int element_counter = 0;

	while (h != NULL)
	{
		element_counter++;
		h = h->next;
	}

	return (element_counter);
}
