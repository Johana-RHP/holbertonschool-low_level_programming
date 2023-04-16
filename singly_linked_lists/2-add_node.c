#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * add_node - Add a new node at the beginning of a singly linked list
 * @head: Pointer to head in main function
 * @str: String to be duplicated
 * Return: Address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	struct list_s *new_node = (list_t *) malloc(sizeof(list_t));

	if(new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = (*head);

	(*head) = new_node;

	return (*head);
}
