#include "lists.h"
#include <stdio.h>

/**
 * list_len - function that returns the number of elements in list
 * @h: pointer to the head
 * Return: number of elements in list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
