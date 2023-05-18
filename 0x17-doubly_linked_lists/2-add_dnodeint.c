#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - Adds a new node at the beginning of a doubly linked list.
 * @head: Double pointer to the beginning of the linked list.
 * @n: Value to add to the new node.
 * Return: Pointer to the new node, or NULL on failure.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	*head = new_node;

	if (new_node->next != NULL)
		(new_node->next)->prev = new_node;

	return (new_node);
}
