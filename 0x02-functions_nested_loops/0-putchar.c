#include "_putchar.c"

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
