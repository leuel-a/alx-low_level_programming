#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - This is a dog structure
 * @name: Name of th dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
