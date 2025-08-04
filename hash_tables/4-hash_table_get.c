#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table you want to look into
 * @key: key you are looking for
 * Return: return the value assoc with element, NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (!ht || !key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index]; /* points to the first node in the list*/

	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next; /* keep searching */
	}
	return (NULL); /* if not found*/
}
