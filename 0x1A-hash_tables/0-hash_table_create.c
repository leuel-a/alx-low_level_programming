#include "hash_tables.h"

/**
 * hash_table_create - This function creates a hash table of type hash_table_t
 * @size: The size of the hash table
 *
 * Return: On success, it returns a pointer to the newly created hash_table.
 * On error, it returns NULL, and rrno is set appropriately.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;

	if (size <= 0)
		return (NULL);
	new = malloc(sizeof(hash_table_t) * 1);
	if (new == NULL)
		return (NULL);
	new->array = malloc(sizeof(hash_node_t *) * size);
	if (new->array == NULL)
	{
		free(new);
		return (NULL);
	}
	return (new);
}
