#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - prints numbers from a singly linked list pointed
 * by h
 * @h: The head node of the singly linked list
 *
 * Return: The number of nodes in the linked list
 */

size_t print_listint(const listint_t *h)
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
