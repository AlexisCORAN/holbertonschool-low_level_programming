#include "lists.h"
#include <stdio.h>

/**
* print_list - function that prints all the elements of a list_t list.
*
*@h: pointer of the linked list.
*
* Return: number of nudes.
*/

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if( h != NULL)
		{
			if (h->str == NULL)
			{
				printf("[%d] %s\n", 0, "(nill)");
			}
			else
			{
				printf("[%d] %s\n", h->len, h->str);
			}

			h = h->next;
			count++;
		}
	}	
	return (count);
}
