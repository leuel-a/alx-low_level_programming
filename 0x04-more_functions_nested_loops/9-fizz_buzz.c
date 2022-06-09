#include <stdio.h>

/**
 * main - Entry point of my program
 *
 * Return: Zero upon program success
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i == 1)
		{
			goto here;
		}
		putchar(' ');
here:
		if ((i % 3) == 0)
		{
			printf("Fizz");
		} else if ((i % 5) == 0)
		{
			printf("Buzz");
		} else if (i % 15 == 0)
		{
			printf("FizzBuzz");
		} else
		{
			printf("%d", i);
		}
	}
	putchar('\n');
	return (0);
}
