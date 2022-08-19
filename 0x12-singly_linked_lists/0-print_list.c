#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_list - This function prints the elements in a singly
 * linked list
 * @h: The singly linked list that element will be printed
 *
 * Return: The number of nodes in the singly linked list h
 */

size_t print_list(const list_t *h)
{
	size_t node = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		node++;
	}
	return (node);
}
