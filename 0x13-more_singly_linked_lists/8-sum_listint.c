#include "lists.h"

/**
 * sum_listint - finds the sum of all data(n) of a
 * listint_t linked list
 * @head: A pointer that points to the head node
 *
 * Return: On success, it returns the sum of all the
 * data(n) in a listint_t linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (*head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
