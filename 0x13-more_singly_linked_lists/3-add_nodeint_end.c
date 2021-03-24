#include "lists.h"

/**
* add_nodeint_end - function that adds a new node at the end
*		of a listint_t list.
*@head: the original linked list.
*
*@n: data int to add to node.
*
* Return: the address of the new element, or NULL if it failed.
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *tmp = *head;
	int new_n = n;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = new_n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = new_node;

	return (tmp);
}
