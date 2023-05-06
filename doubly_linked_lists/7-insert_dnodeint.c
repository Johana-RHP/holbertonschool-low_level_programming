#include "lists.h"

/**
 * insert_node - insert node at given index
 * @tmp: ptr to nth position node in doubly linked list
 * @n: node data
 * Return: address of inserted node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL, *tmp = NULL;

	if (idx == 0)
		return (add_dnodeint(h, n));

	tmp = *h;
	while (tmp && idx != 1)
		tmp = tmp->next, idx--;

	if (!tmp && idx != 1)
		return (NULL);
	if (!tmp->next)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;

	new_node->next = tmp->next;
	new_node->prev = tmp;

	tmp->next->prev = new_node;
	tmp->next = new_node;

	return (new_node);
}
