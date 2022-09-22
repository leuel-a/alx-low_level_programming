#include "hash_tables.h"

/**
 * key_index - This function gives you the indexx of a key that will be used
 * in the hash table hash_table_t
 * @key: This will be the key for the value to be stored in the hash table
 * @size: This is the siz of the hash table
 *
 * Return: The index of the key that will be stored in the hash table of type
 * hash_table_t
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_code;

	hash_code = hash_djb2(key) % size;
	return (hash_code);
}
