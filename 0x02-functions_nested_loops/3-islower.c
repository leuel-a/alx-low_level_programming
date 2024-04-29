#include "main.h"

/**
 * _islower - checks if a character is lowercase
 *
 * @c: the character passed as an argument
 *
 * Return: If the character is lowercase it returns 1,
 * else returns 0. 0 --> failure 1 --> success
 */
int _islower(int c)
{
	if (c >= 97 && c < 123)
		return (1);
	return (0);
}
