#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - This function frees a dlistint doubly
 * linked list
 * @head: A pointer that points to the address of the head
 * node
 *
 * Return: It returns NOTHING(void)
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux = NULL;

	while (head)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
}
