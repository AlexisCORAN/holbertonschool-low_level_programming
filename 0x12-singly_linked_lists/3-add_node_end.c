#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
* add_node_end - function that adds a new node at the end of a list_t list.
*
*@head: linked list.
*
*@str: string to add.
*
* Return: the address of the new element, or NULL if it failed.
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *tmp = *head;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = _strlen(str);
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

/**
* _strlen - function that returns the length of a string.
*
*@s: pointer to a string.
*
* Return: length of a string.
*/

int _strlen(const char *s)
{
	int i;

	while (s[i] != '\0')
		i++;

	return (i);
}
