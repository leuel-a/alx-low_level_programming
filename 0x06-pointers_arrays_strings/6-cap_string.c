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
		if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '.')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		if (str[i - 1] == '\n' || str[i - 1] == '\t')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
	}
	return (str);
}
