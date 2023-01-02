#include "lists.h"

/**
 * insert_nodeint_at_index - this function inserts a new node at the
 * given index.
 * @head: the head node of the linked list listint_t
 * @idx: the index where the new node will be added
 * @n: the data that will be stored in the linked list
 *
 * Return: On success, it returns the address of the new node.
 * On error, it returns NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *aux, *next;
	unsigned int i = 0;

	aux = *head;
	while (aux != NULL)
	{
				
	return (NULL);
}

/**
 *
 */
listint_t *create_node(int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return NULL;
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}
