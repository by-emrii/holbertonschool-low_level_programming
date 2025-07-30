#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - function that adds a new node at the beginning of the list
 * @head: double ptr to the head of list
 * @str: the string to be dup and add
 * Return: the address of the new element, or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int i = 0;

	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str); /* dup input str, now points to copy*/
	if (!new_node->str) /* if dup failed, clean up, free node */
	{
		free(new_node);
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}

	new_node->len = i;
	new_node->next = *head; /* connects new node to current head of list*/
	*head = new_node; /* update head pointer to new node, at front*/

	return (new_node);
}
