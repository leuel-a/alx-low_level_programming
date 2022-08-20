#include "lists.h"
#include <stdlib.h>

/**
 * free_list - This function will free a linked lit pointed by the
 * head node 'head'
 * @head: The head node of the linked list
 *
 * Return: This function returns nothing.
 */

void free_list(list_t *head)
{
	list_t *ptr = head;

	while (ptr->next != NULL)
	{
		list_t *aux = ptr;
		/**
		 * aux - is an auxilary variable that will help us free
		 * the elements in the linked list.
		 *
		 * We can not use ptr to free the elements, because we
		 * want it to iterate through the entire linked list
		 *
		 * If we freed ptr without storing it first i aux, then
		 * we will lose the ability to traverse the list
		 */

		ptr = ptr->next;
		free(aux);
	}
	head = NULL;
}


