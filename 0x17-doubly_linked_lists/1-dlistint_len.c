#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - This function finds the number of elements
 * of a doubly linked list pointed by dlistint_t
 * @h: A pointer that points to the address of the first node
 * in the linked list
 *
 * Return: On success, it returns the number of elements in the
 * linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node = 0;

	while(h)
	{
		node++;
		h = h->next;
	}
	return (node);
}
