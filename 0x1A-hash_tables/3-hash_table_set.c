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

	if (!key || '\n' || '\t')
		return (0);

	new = create_node(key, value);
	if (new == NULL)
		return (0);
	hash_code = key_index((unsigned char *)key, ht->size);
	if (ht->array[hash_code] == NULL)
	{
		ht->array[hash_code] = new;
		new->next = NULL;
		return (1);
	}

	aux = ht->array[hash_code];
	while (aux != NULL)
	{
		if (strcmp(aux->key, key) == 0)
		{
			free(aux->value);
			strcpy(aux->value, value);
			return (1);
		}
		aux = aux->next;
	}

	new->next = ht->array[hash_code];
	ht->array[hash_code] = new;
	return (1);
}

/**
 * create_node - this function creates a new node of type hash_node_t
 * @key: this is the key of the new node
 * @value: this is the value of the new node
 *
 * Return: On success, it returns a pointer to the newly created node.
 * On error, it returns NULL.
 */

hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (NULL);

	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (NULL);
	}
	new->value = strdup(value);
	if (new->value == NULL)
	{
		free(new->key);
		free(new);
		return (NULL);
	}
	return (new);
}
