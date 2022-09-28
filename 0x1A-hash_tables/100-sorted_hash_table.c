#include "hash_tables.h"

/**
 * shash_table_create - this function creates a hash_table of type
 * shash_table_t.
 * @size: this is the size of the new hash_table
 *
 * Return: On success, it returns the newly created hash_table.
 * On error, it returns NULL, and errno is set appropriately.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new;

	if (size == 0)
		return (NULL);

	new = malloc(sizeof(shash_table_t));
	if (new == NULL)
		return (NULL);
	new->size = size;
	new->array = calloc(size, sizeof(shash_node_t *));
	if (new->array == NULL)
	{
		free(new);
		return (NULL);
	}
	return (new);
}

/**
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hash_code;
	shash_node_t *new, *node;

	if (!key || ht == NULL)
		return (0);

	new = create_snode(key, value);
	if (new == NULL)
		return (0);

	hash_code = key_index((unsigned char *)key, ht->size);

	if (ht->array[hash_code] == NULL)
	{
		sort_shash_table(ht, new);
		ht->array[hash_code] = new;
		new->next = NULL;
		return (1);
	}
	node = ht->array[hash_code];
	while (node != NULL)
	{
		if (strcmp(node->key, key) != 0)
		{
			free(node->value);
			node->value = strdup(value);
			free(new->value);
			free(new->key);
			free(new);
			return (1);
		}
		node = node->next;
	}
	sort_shash_table(ht, new);
	new->next = ht->array[hash_code];
	ht->array[hash_code] = new;
	return (1);
}

/**
 * create_snode - creates a new node for the sorted shash_table_t
 * @key: this is the key of the new node
 * @value: this is the value of the new node
 *
 * Return: On success, it returns a pointer to the newly allocated
 * shash_node_t. On error, it returns NULL, and errno is set appropriately
 */
shash_node_t *create_snode(const char *key, const char *value)
{
	shash_node_t *new;

	new = malloc(sizeof(shash_node_t));
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

/**
 * sort_shash_table - this function will add the keys to a sorted
 * doubly linked list
 * @ht: a pointer to a shash_table_t that will be updated based on a sorted manner
 * @new: the new node that will be added to the sorted shash_table_t (ht)
 *
 * Return: Nothing
 */

void sort_shash_table(shash_table_t *ht, shash_node_t *new)
{
	shash_node_t *aux, *tmp;

	if (ht->shead == NULL)
	{
		ht->shead = new;
		ht->stail = new;
		new->sprev = NULL;
		new->snext = NULL;
		return;
	}

	if (strcmp(ht->shead->key, new->key) > 0)
	{
		new->sprev = NULL;
		new->snext = ht->shead;
		ht->shead->sprev = NULL;
		ht->shead = new;
		return;
	}

	aux = ht->shead;
	while (aux->snext != NULL)
	{
		if (strcmp(new->key, aux->snext->key) < 0)
		{
			new->sprev = aux;
			tmp = aux->snext;
			aux->snext = new;
			new->snext = tmp;
			tmp->sprev = new;
		}
		aux = aux->snext;
	}
	aux->snext = new;
	new->sprev = aux;
	new->snext = NULL;

	aux = ht->shead;
	while (aux->snext != NULL)
		aux = aux->snext;
	ht->stail = aux;
}

/**
 * shash_table_print - this function prints the sorted hash table
 * @ht: the hash table to be printed
 *
 * Return: Nothing
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *aux;
	int count = 0;

	aux = ht->shead;
	putchar('{');
	while (aux != NULL)
	{
		if (count == 1)
			printf(", ");
		printf("'%s': '%s'", aux->key, aux->value);
		aux = aux->snext;
		count = 1;
	}
	printf("}\n");
}
