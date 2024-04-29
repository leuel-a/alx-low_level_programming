#include "_putchar.c"

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *print_text = "_putchar";

	char *character = print_text;
	while (*character != '\0')
	{
		_putchar(*character);
		character++;
	}
	_putchar('\n');
	return (0);
}
