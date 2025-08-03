#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_dlistint - frees a dlistint_t list
 * @head: ptr to head of list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp_node;

	while (head != NULL)
	{
		temp_node = head->next;
		free(head);
		head = temp_node;
	}
}
