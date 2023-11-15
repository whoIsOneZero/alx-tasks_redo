#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table to be added or key/value updated
 * @key: a non-empty string of the key (string)
 * @value: the value associated with the key (string)
 * Return: [success] 1, [failure] 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index, i;
	hash_node_t *new;
	char *value_copy;

       	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL) /*Memory allocation fail*/
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++) /* Iterate to the end*/
	{
		if (strcmp(ht->array[i]->key, key) == 0) /*Match found*/
		{
			free(ht->array[i]->value); /*Free existing value*/
			ht->array[i]->value = value_copy; /*Insert value*/
			return (1);
		}
	}

	/*No match found*/
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(value_copy); /*mem. alloc failed*/
		return (0);
	}

	/*Allocate new node*/
	new->key = strdup(key);
	if (new->key == NULL) /*mem. alloc failed*/
	{
		free(new);
		return (0);
	}

	new->value = value_copy;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
