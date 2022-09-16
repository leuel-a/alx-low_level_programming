#include "main.h"

/**
 * _memset - fills a memory with a constant byte
 * @s: The memory that will be set with constant byte 'b'
 * @b: The constant byte that will be filled in the memory
 * @n: The number of bytes that will be filled
 *
 * Description: The _memset() function fills the first n bytes of
 * the memory area pointed to by s with the constant byte b
 *
 * Return: On success, it returns a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*s = b;
		s++;
	}
	return (s);
}
