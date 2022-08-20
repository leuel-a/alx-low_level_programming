#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - adds a node at the begining of the linked list
 * @head: The address of the head node
 * @str: The string that will be added to the list
 *
 * Return: On success, it returns the address of the new element
 * in the list. On error, it returns NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t));

	if(temp == NULL)
		return NULL;

	temp->str = strdup(str);
	temp->len = strlen(temp->str);
	temp->next = *head;
	*head = temp;
	return (*head);
}
