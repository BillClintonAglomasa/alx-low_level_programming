#include <stdio.h>

/**
 * main - Entry point of program
 *
 * Return: Always 0 (Success)
 *
 * Description: A program that prints all single digit number of base 10
 * starting from 0.
 */
int main(void)
{
	/* Declaring and initializing vaiable */
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
