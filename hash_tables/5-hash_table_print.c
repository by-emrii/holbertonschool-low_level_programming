#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_table_print - prints a hash table
 * @ht: ht to be printed
 * Return: key value pairs in order they appear in array of ht
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int flag_firstpair = 1; /* handle commas between*/

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if (!flag_firstpair)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			flag_firstpair = 0;

			node = node->next; /* move to next node */
		}
	}
	printf("}\n");
}
