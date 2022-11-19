#include "main.h"

/**
 * _strlen - finds the length of a string
 * @str: the string to be checked
 *
 * Return: The length of the string
 */
unsigned int _strlen(char *str)
{
	unsigned int size;

	for (; *str != '\0'; str++)
		size++;
	return (size);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the number of bytes that is to be concatenated
 *
 * Description: The returned pointer shall point to a newly
 * allocated space in memory, which contains s1, followed
 * by the first n bytes of s2, and null terminated.
 *
 * Return: On success, it returns a pointer to the newly concatenated
 * string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1, size2, i, j;
	char *str;

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";
	size1 = _strlen(s1), size2 = _strlen(s2);
	if (size2 > n)
		str = malloc(size1 + n + 1);
	else
		str = malloc(size1 + size2 + 1);

	for (i = 0; i < size1; i++)
		str[i] = s1[i];
	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}
