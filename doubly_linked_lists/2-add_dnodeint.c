#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_dnodeint - adds a new node at the beginning of the list
 * @head: double ptr to the head of list
 * @n: the int to be added to head
 * Return: address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node; /*update old head's prev ptr to new_node*/

	*head = new_node; /*move head to point to new node*/
	return (new_node);
}
