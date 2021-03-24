#include "lists.h"

/**
* free_listint2 - function that frees a listint_t list.
*
*@head: linked list.
*
*/

void free_listint2(listint_t **head)
{
	listint_t *actual_node;
	listint_t *next_node;

	actual_node = *head;

	while (actual_node != NULL)
	{
		next_node = actual_node->next;
		actual_node->next = NULL;
		free(actual_node);
		actual_node = next_node;
	}
	*head = NULL;
}
