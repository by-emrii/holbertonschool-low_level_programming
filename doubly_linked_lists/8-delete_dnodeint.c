#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes the node at index of the linked list
 * @head: double ptr to head
 * @index: index of node to be deleted
 * Return: return 1 if success, -1 if fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *prev, *next;
	unsigned int i = 0;

	if (head == NULL || *head == NULL) /*check if list is empt or h ptr is null*/
		return (-1);

	current = *head;

	if (index == 0) /* if deleting head node */
	{
		next = current->next;
		if (next != NULL)
			next->prev = NULL;
		*head = next; /*update head to the new first node*/
		free(current);
		return (1);
	}

	while (current != NULL && i < index) /*loop to find the node at index*/
	{
		current = current->next; /*move to next node*/
		i++;
	}
	if (current == NULL) /* if idx out of range*/
		return (-1);

	prev = current->prev;
	next = current->next;

	if (prev != NULL) /*link prev node's next to the node after current*/
		prev->next = next;
	if (next != NULL) /*link next node's prev node before current*/
		next->prev = prev;

	free(current); /*free the node to delete*/
	return (1);
}
