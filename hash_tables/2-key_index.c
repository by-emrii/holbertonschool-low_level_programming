#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * key_index - function that gives you the index of a key
 * @key: the key
 * @size: the size of the array of the hash table
 * Return: the index at which key/value pair stored in arr of hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
