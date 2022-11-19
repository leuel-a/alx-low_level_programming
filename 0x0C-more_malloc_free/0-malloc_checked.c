#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of the new memory to be allocated
 *
 * Return: Nothing
 */
void *malloc_checked(unsigned int b)
{
	void *new;

	new = malloc(b);
	if (new == NULL)
		exit(98);
	return (new);
}
