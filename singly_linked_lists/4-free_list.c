#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_list - function that frees a list_t list
 * @head: ptr to the head the list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp_node;

	while (head != NULL)
	{
		temp_node = head->next; /* save the next node first */
		free(head->str);
		free(head); /* free current head */
		head = temp_node;
	}
}
