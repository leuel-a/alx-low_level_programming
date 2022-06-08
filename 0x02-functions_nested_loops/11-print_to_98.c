#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_to_98(0);
    print_to_98(98);
    print_to_98(111);
    print_to_98(81);
    print_to_98(-10);
    return (0);
}

/**
 * print_to_98 - is a function that prints upto 98
 *
 * @n: The number who will serve as the initial
 *
 * Return: Zero upon program success
 */

void print_to_98(int n)
{
	int i, neg, pos;
	while(i <= n)
	{
		if(i < 0)
		{
			_putchar(i + '0');
			neg++;
		}
		i++;
	}
	
	i = 0;
	
	while(i <= n)
	{
		if(i > 0)
		{
			_putchar(i + '0');
			pos++;
		}
		i++;
	}
}
