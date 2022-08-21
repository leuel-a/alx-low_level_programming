#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - This function adds a new node to the end of
 * a linked lit whose head node address is pointed by head
 * @head: This is a pointer that points to the pointer that points
 * to the first element in the singly linked list
 * @n: The new element that will be added to the linked list
 *
 * Return: On success, it returns the address of the new node added
 * to the end of the linked list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));
	listint_t *ptr;

	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	if (*head == NULL)
		*head = temp;
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = temp;
	}
	return (*head);
}
