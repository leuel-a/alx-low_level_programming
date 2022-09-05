#include "main.h"
#include <unistd.h>
/**
 * _putchar - This function prints a character to stdout
 * @c: The character to be printed
 *
 * Return:On success, it returns one.
 * On error, it returns -1, and errno is set appropriately
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
