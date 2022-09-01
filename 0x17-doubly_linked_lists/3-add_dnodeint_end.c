#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - This function adds a new node at the end of a
 * doubly linked list
 * @head: A pointer that points to a pointer to the head node
 * @n: The new element that will be added to the linked list
 *
 * Return: On success, it returns the address of the new node added.
 * On error, it returns NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));
	dlistint_t *aux = *head;

	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	if (*head == NULL)
	{
		*head = temp;
		return (*head);
	}
	while (aux->next != NULL)
	{
		aux = aux->next;
	}
	temp->prev = aux;
	aux->next = temp;
	return (temp);
}
