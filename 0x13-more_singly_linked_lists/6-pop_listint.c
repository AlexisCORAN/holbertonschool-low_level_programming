#include "lists.h"

/**
* pop_listint - function that deletes the head node of a listint_t
*		linked list, and returns the head node’s data (n).
*@head: head of the linked list.
*
* Return: if the linked list is empty return 0 or the head node’s data (n).
*/

int pop_listint(listint_t **head)
{
	listint_t *node = *head;
	int result;

	if (*head == NULL)
		return (0);

	result = (*head)->n;
	(*head) = (*head)->next;
	free(node);
	return (result);
}
