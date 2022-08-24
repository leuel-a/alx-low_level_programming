#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - A function that deletes the first node
 * in a linked list
 * @head: A pointer to a pointer to the head
 *
 * Return: On success, it returns the data stored in the
 * first node of the linked list
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *ptr;

	if (*head == NULL)
		return (0);
	ptr = (*head)->next;
	data = (*head)->n;
	free((*head));
	(*head) = ptr;
	return (data);
}
