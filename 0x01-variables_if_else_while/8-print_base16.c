#include <stdio.h>

/**
* main - entry point of the program
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
		putchar('0' + a);

	for (a = 97; a < 103; a++)
		putchar(a);

	putchar('\n');
	return (0);
}
