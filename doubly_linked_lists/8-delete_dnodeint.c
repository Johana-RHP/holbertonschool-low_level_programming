#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at given idx
 * @head: pointer to head of doubly linked list
 * @index: index
 * Return: 1 if successful, -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = NULL;

	if (!head || !(*head))
		return (-1);

	tmp = *head;

	if (index == 0)
	{
		*head = tmp->next;
		if (*head)
			(*head)->prev = NULL;
	}
	else
	{
		while (tmp && index != 0)
			tmp = tmp->next, index--;

		if (!tmp)
			return (-1);

		tmp->prev->next = tmp->next;
		if (tmp->next)
			tmp->next->prev = tmp->prev;
	}

	free(tmp);
	return (1);
}
