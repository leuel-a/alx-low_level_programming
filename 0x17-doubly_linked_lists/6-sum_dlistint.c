#include "lists.h"
#include <stdlib.h>

/**
 * sum_dlistint - Finds the sum of all the data(n) of a dlistint_t
 * linked list
 * @head: A pointer that points to the address of the head node
 *
 * Return: On success, it returns the sum of all elements in the list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = head;

	if (temp == NULL)
	{
		return (0);
	}
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
