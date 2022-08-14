#include "main.h"

/**
 * cap_string - this function capitalizes every word of a string
 * @str: The string to be capitalized
 *
 * Return: On success, it returns the string with all the words
 * capitalized
 */

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] -= 32;
			}
		}
	}

	return (str);
}
