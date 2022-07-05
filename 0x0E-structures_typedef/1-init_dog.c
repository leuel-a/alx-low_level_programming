#include "dog.h"

/**
 * init_dog - This function initializes a dog
 * variable members.
 *
 * @d: The dog structure to be initialized
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The name of the owner of the dog
 *
 * Return: This function returns a VOID
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
