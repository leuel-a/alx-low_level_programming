#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - This function adds a new node at the beginning
 * of a doubly linked list
 * @head: This is a pointer to the head node of the linked list
 * @n: The new element that will be added at the beginning of the
 * linked list
 *
 * Return: On success, it returns the address of the new node added
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));

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
	temp->next = *head;
	(*head)->prev = temp;
	*head = temp;
	return (*head);
}
