#include "lists.h"

/**
* list_len -  function that returns the number of elements
* in a linked list_t list.
*
*@h: pointer position of linked list.
* Return: number of nodes.
*/

size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
