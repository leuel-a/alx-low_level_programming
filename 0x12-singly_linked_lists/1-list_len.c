#include "lists.h"
#include <stddef.h>

/**
 * list_len - This function finds the number of elements
 * in a linked list list_t
 * @h: The singly linked list that is passed as an argument
 * and checked for elements
 *
 * Return: On success, it returns the number of elements in the linked list
 */

size_t list_len(const list_t *h)
{
	size_t node = 0;

	while (h)
	{
		h = h->next;
		node++;
	}
	return (node);
}

