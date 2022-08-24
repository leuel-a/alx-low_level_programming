#include "lists.h"
#include <stdlib.h>

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
