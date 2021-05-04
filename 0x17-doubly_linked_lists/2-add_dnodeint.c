#include "lists.h"

/**
* add_dnodeint - function that adds a new node
*		at the beginning of a dlistint_t list.
*
*@head: head of the linked list.
*
*@n: int to add to the node.
*
* Return: address of the new element, or NULL if it failed.
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	const int new_data = n;

	if (head == NULL)
	return (NULL);

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	return (NULL);

	new_node->n = new_data;
	new_node->next = (*head);
	new_node->prev = NULL;

	if ((*head) != NULL)
	{
		(*head)->prev = new_node;
	}
	(*head) = new_node;

	return (new_node);
}
