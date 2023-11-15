#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: the item key
 * @size: size of the array of the hash table
 * Return: the indec at which the key/value pair should
 * be stored in the array of hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
