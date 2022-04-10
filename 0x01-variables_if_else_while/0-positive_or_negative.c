#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - entry point: A program to determine positive and negative random numbers
 *
 *Return: Always 0 (success)
 **/
int main (void)
{
	srand = (time(0));
	int n = rand() - RAND_MAX * 100;
	if(n>0)
	{
		printf("%d is a positive number\n", n);
	}
	else if(n<0)
	{
		printf("%d is a negative number\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
