#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the table to look into
 * @key: the key to look for
 * Return: the value associated with the element,
 * or NULL if the @key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = ht->array[index];
	while (node && strcmp(node->key, key) != 0) /*Until reach end or find a match*/
		node = node->next;

	return((node == NULL) ? NULL: node->value); /*NULL - key doesn't exist*/
}
