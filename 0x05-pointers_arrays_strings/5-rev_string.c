#include "main.h"

/**
 * rev_string - This function reverses a string
 * @s: This is the string that is to be reversed
 *
 * Return: This function returns a void
 */

void rev_string(char *s)
{
	int i = 0, j, length, temp;

	while (*(s + i) != '\0')
	{
		i++;
	}
	length = i;
	for (j = 0; j < length; j++)
	{
		temp = s[length - 1];
		s[length - 1] = s[j];
		s[j] = temp;
		length--;
	}
}
