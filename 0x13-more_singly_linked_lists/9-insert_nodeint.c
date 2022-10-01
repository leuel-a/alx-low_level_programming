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
	listint_t *aux, *new, *prev;
	unsigned int num = 0;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	aux = *head;
	while (aux->next != NULL)
	{
		if (num == idx)
		{
			prev->next = new;
			new->next = aux;
			return (new);
		}
		prev = aux;
		aux = aux->next;
		num++;
	}
	aux->next = new;
	new->next = NULL;
	return (new);
}
