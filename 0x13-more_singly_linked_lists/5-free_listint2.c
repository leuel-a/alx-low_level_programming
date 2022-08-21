#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - this functio frees the elements in the linked
 * list pointed by the pointer head that points to the the first
 * element in the list
 * @head: The pointer that points to the head node that contains
 * the address of the first element in the linked list
 *
 * Return: This function returns nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *aux, *ptr = *head;

	while (ptr)
	{
		aux = ptr->next;
		free(ptr);
		ptr = aux;
	}
	*head = NULL;
}
