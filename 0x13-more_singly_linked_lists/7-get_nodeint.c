#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
*			of a listint_t linked list.
*@head: head of the linked list.
*
*@index: Index of the node.
*
* Return: returns NULL or the locate node.
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp = head;

	for (i = 0; i < index; i++)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
	}
	return (tmp);
}
