#include "hash_tables.h"

/**
 * Create new hash table item.
 * 
 * @key: the key of the item
 * @value: the value of the item
 * Return: a pointer to the created item 
 */
hash_node_t* create_item(char* key, char* value)
{
    hash_node_t* item = (hash_node_t*) malloc(sizeof(hash_node_t));

    if (item == NULL)
        return (NULL);

    item->key = (char*) malloc(strlen(key) + 1);
    if (item->key == NULL)
        return (NULL);
    item->value = (char*) malloc(strlen(value) + 1);
    if (item->key == NULL)
        return (NULL);

    strcpy(item->key, key);
    strcpy(item->value, value);

    return (item);
}

/**
 * hash_table_create - creates a hash table
 * 
 * @size: the size of the array
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    unsigned long int i;

    hash_table_t* table = (hash_table_t*) malloc(sizeof(hash_table_t));
    if (table == NULL)
        return (NULL);

    table->size = size;
    table->array = (hash_node_t**) calloc(table->size, sizeof(hash_node_t*));
    if (table->array == NULL)
    {
        free(table); /*Free previously allocated memory by `malloc`*/
        return (NULL);
    }

    for (i = 0; i < table->size; i++)
        table->array[i] = NULL;

    return (table);
}