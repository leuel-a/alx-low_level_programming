#include "hash_tables.h"

/**
 * hash_table_print - this function prints a hash_table_t
 * @ht: this is the hash table to be printed
 *
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int count = 0;
	hash_node_t *aux;

	if (ht == NULL)
	{
		printf("{}");
		return;
	}
	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		aux = ht->array[i];
		while (aux != NULL)
		{
			if (count)
				printf(", ");
			printf("'%s': '%s'", aux->key, aux->value);
			aux = aux->next;
			if (count == 0)
				count = 1;
		}
	}
	printf("}\n");
}
