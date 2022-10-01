#include "lists.h"

/**
 * get_nodeint_at_index - this function returns the nth node of
 * a listint_t linked list
 * @head: the head of the linked list to be searched
 * @index: the index that will be returned
 *
 * Return: On success, it returns the nth node of the linked list.
 * On error, it returns NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *aux;

	if (head == NULL)
		return (NULL);

	aux = head;
	while (aux != NULL)
	{
		if (n == index)
			return (aux);
		aux = aux->next;
		n++;
	}
	return (NULL);
}
