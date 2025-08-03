#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_dnodeint_end - adds a new node at the end of the list
 * @head: double ptr to the head of list
 * @n: the int to be added to end
 * Return: address of the new element or null if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	temp = *head;

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL) /*if list is empty*/
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	while (temp->next != NULL)
		temp = temp->next; /*loop until end of list*/

	temp->next = new_node;
	new_node->prev = temp;
	return (new_node);
}
