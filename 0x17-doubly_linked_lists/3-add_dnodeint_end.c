#include "lists.h"

/**
* add_dnodeint_end - function that adds a new node
*                   at the end of a dlistint_t list.
*
*@head: head of the linked list.
*
*@n: int to add to the node.
*
* Return: the address of the new element, or NULL if it failed.
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *tmp = *head;
	const int new_data = n;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	return (NULL);

	new_node->n = new_data;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (*head);
	}

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}

	tmp->next = new_node;
	new_node->prev = tmp;

	return (tmp);
}
