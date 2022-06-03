#include <stdio.h>

/**
 * main - Entry point of my program
 *
 * Description - This program print numbers upto 10
 *
 * Return: Returns 0 upon program success
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	printf("\n");
	return (0);
}
