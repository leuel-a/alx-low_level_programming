#include "hash_tables.h"

/**
 * hash_table_set - this function adds an element to the hash table
 * @ht: the hash table that a new eement will be added
 * @key: the key for the new element
 * @value: the value for the new element
 *
 * Return: On success, it returns 1. On error, it returns 0, and errno
 * is set appropriately
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hash_code;
	hash_node_t *new = NULL, *aux;

	if (key == NULL)
		return (0);

	hash_code = key_index((unsigned char *)key, ht->size);
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = malloc(strlen(key) + 1);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = malloc(strlen(value) + 1);
	if (new->value == NULL)
	{
		free(new->key);
		free(new);
		return (0);
	}

	strcpy(new->key, key);
	strcpy(new->value, value);

	if (ht->array[hash_code] == NULL)
	{
		ht->array[hash_code] = new;
		new->next = NULL;
		return (1);
	}
	aux = ht->array[hash_code];
	while (aux->next != NULL)
		aux = aux->next;
	aux->next = new;
	return (1);
}
