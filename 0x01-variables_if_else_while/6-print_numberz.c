#include <stdio.h>

/**
 * main - Entry point 
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int number;

	number = 0;
	while (number <= 9)
	{
		printf("%d", number);
		number++;
	}
	printf("\n");
	return (0);
}
