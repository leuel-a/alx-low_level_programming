#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dlistint - This function prints the elements of a doubly
 * linked list pointed by h
 * @h: The pointer that contains the address of the dead node
 *
 * Return: On success, the function returns the number of nodes in
 * the doubly linked list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t node = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		node++;
	}
	return (node);
}
