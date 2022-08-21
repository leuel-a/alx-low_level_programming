#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint - adds a new node to the begining of the list
 * @head: Address of the head node
 * @n: The number that will be added as a new element in the
 * linked list
 *
 * Return: The address of the new node added to the linked list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));

	temp->n = n;
	temp->next = (*head);
	(*head) = temp;
	return (*head);
}

