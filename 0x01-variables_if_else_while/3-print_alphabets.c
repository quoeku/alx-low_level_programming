#include <stdio.h>

/**
 * main - Entry point of code.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char  letter;

	letter = 'a';
	while (letter != '{')
	{
		putchar (letter);
		letter++;
	}
	letter = 'A';
	while (letter != '[')
	{
		putchar (letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
