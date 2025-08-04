#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - adds element to the hash table
 * @ht: the hash table you want to add/update to
 * @key: the key. cannot be empty string
 * @value: value assoc with the key, must be dup, can be empty str
 * Return: 1 if succeeded, 0 if fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node, *new_node;

	if (!ht || !key || !value)
		return (0);

	/* turn key into index using func*/
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index]; /*looks inside ht for node*/

	/*update value if key exists*/
	while (node)
	{
		if (strcmp(node->key, key) == 0) /*compare the two key str*/
		{
			free(node->value);
			node->value = strdup(value);
			return (1);
		}
		node = node->next; /* keep searching */
	}

	/* if node does not exist, create node */
	new_node = malloc(sizeof(hash_node_t));

	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);

	new_node->next = ht->array[index]; /*insert it at head*/
	ht->array[index] = new_node;

	return (1);
}
