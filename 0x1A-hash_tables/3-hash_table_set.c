#include "hash_tables.h"

/**
 *
 *
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hash_code;
	hash_node_t *new = NULL, *aux;

	if (key == NULL)
		return (0);

	hash_code = key_index((unsigned char *)key, ht->size);
	new = malloc(sizeof(hash_node_t));
	new->key = malloc(strlen(key) + 1);
	new->value = malloc(strlen(value) + 1);

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
