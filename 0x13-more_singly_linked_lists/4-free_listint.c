#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - free the elements in the linked list
 * @head: This pointer points to the the first element in the
 * linked list
 *
 * Return: This function returns nothing
 */

void free_listint(listint_t *head)
{
	listint_t *aux;
	listint_t *ptr = head;

	while (ptr)
	{
		aux = ptr->next;
		free(ptr);
		ptr = aux;
	}
}

