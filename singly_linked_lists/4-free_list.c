#include "lists.h"

/**
 * free_list - Free a list.
 *
 * @head: Double pointer to the head of a linked list
 *
 * Return: Void.
 */

void free_list(list_t *head)
{
	struct list_s *last;

	while (head != NULL)
	{
		last = head;
		head = head->next;

		free(last->str);
		free(last);
	}
}
