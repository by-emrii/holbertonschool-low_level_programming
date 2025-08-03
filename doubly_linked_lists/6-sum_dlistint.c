#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * sum_dlistint - returns the sum of all the data (n) of linked list
 * @head: ptr to head of list
 * Return: total sum of n
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next; /* move to next node*/
	}
	return (sum);
}
