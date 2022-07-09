#include "function_pointers.h"

/**
 * print_name - Prints a name, that has been passed to
 * it as an argument. It prints a name by calling back
 * a function passed to it as an argument also.
 *
 * @name: The name that is to be printed
 * @f: The function that is to be called back
 *
 * Return: This function returns a void
 */


void print_name(char *name, void (*f)(char *))
{
	if (*name != '\0')
	{
		f(name);
	}
}
