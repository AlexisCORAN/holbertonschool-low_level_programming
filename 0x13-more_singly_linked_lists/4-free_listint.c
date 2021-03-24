#include "lists.h"

/**
* free_listint - function that frees a listint_t list.
*
*@head: linked list.
*
*/

void free_listint(listint_t *head)
{
	listint_t *actual_node = head;
	listint_t *next_node;

	while (actual_node != NULL)
	{
		next_node = actual_node->next;
		free(actual_node);
		actual_node = next_node;
	}

}
