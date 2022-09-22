#include "hash_tables.h"

/**
 *
 *
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hash_code = key_index((unsigned char *)key, ht->size);
	hash_node_t *new = NULL;

	if (ht->array[hash_code] == NULL)
	{
		new = malloc(sizeof(hash_node_t) * 1);
		if (new == NULL)
			return (0);
		new->key = malloc((strlen(key) + 1) * 1);
		if (new->key == NULL)
		{
			free(new);
			return (0);
		}
		new->value = malloc((strlen(value) + 1) * 1);
		if (new->value == NULL)
		{
			free(new->key);
			free(new);
			return 0;
		}

		strcpy(new->key, key);
		strcpy(new->value, value);
		ht->array[hash_code] = new;
	}
	return (1);
}	
