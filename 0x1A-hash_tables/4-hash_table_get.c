#include "hash_tables.h"

/**
 * hash_table_get - this function retrieves a value associated with a key
 * of a hash_table_t.
 * @ht: this is the hash table to be searched
 * @key: this is the key that will be used to search for the value
 *
 * Return: On success, it returns the value found by using the key. On
 * faliure it returns NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hash_code;
	hash_node_t *aux;

	if (!key || ht == NULL)
		return (NULL);
	hash_code = key_index((unsigned char *)key, ht->size);
	aux = ht->array[hash_code];
	while (aux != NULL)
	{
		if (strcmp(aux->key, key) == 0)
			return (aux->value);
		aux = aux->next;
	}
	return (NULL);
}
