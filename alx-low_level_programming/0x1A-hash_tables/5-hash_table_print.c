#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 * Key/value pairs are printed in the order they appear
 * in the array of the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	unsigned char comma_flag = 0;

	if (ht == NULL)
		return; /*Print nothing*/

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL) /*Non-empty key/value pair slot*/
		{
			if (comma_flag == 1)
				printf(", ");

			node = ht->array[i]; /*Traverse the linked list at curr slot*/
			while (node != NULL)
			{
				printf("'%s': %s'", node->key, node->value);
				node = node->next;

				/*Multiple key/value pairs*/
				if (node != NULL)
					printf(", ");
			}
			comma_flag = 1; /*After each key/value pair*/
		}
	}
	printf("}\n");
}
