#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of my program
 *
 * Description - This program prints the last digit of a random number
 *
 * Return: Zero upon program success
 */

int main(void)
{
	int n, lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;
	if (lastdigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastdigit);
	} else if (lastdigit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastdigit);
	} else
	{
		printf("Last digit of %d is %d and ", n, lastdigit);
		printf("is less than 6 and not 0\n");
	}
	return (0);
}
