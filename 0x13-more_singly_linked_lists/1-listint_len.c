#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * listint_len - this function finds the number of elements in a singly
 * linked list pointed by h
 * @h: The linked list where elements will be checked
 *
 * Return: The number of elements in the linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		h = h->next;
		node++;
	}
	return (node);
}
