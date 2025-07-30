#include "lists.h"
#include <stdio.h>

/**
 * add_node_end - function that adds a new node at the end of the list
 * @head: double ptr to head of the list
 * @str: str to dup into new node
 * Return: addy of new element, null if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	int i = 0;

	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	while (str[i] != '\0')
		i++;

	new_node->len = i;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
}
