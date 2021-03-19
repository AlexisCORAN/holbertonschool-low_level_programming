#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node - function that adds a new node at the beginning of a list_t list.
*
*@head: the original linked list.
*
*@str: string to add to the node.
*
* Return: address of the new list.
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int i = 0;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	while (str[i] != '\0')
		i++;

	new_node->len = i;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}


