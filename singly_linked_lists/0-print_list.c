#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: The head of a linked list
 *
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	int node_counter = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		node_counter++;
		h = h->next;
	}

	return (node_counter);
}
