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
	list_t *aux;
	/**
	 * aux - this will be an auxillary variable that will hold the address
	 * of the next node in the list
	 *
	 * Description: aux is needed because if we free the node pointed by ptr
	 * with out storing the address of the next node, there wont be any method
	 * to retrieve the address of the next node. Hence, the linked list will
	 * be lost
	 *
	 */
	list_t *ptr = head;

	while (ptr)
	{
		aux = ptr->next;
		free(ptr->str);
		free(ptr);
		ptr = aux;
	}
}
