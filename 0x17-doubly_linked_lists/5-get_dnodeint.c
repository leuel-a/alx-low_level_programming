#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_at_index - This function gets a node at index provided
 * to it.
 * @head: A pointer that holds the address if the head node
 * @index: The position of the node that you want to return
 *
 * Description: The head node of the doubly linked list will have the
 * index of zero.
 *
 * Return: On success, it returns the address of the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n_node = 0;
	dlistint_t *temp = head;
	dlistint_t *aux;

	while (temp)
	{
		if (index == n_node)
		{
			aux = temp;
			return (aux);
		}
		temp = temp->next;
		n_node++;
	}
	return (NULL);
}
