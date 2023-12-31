#include <stdio.h>

/**
 * main - Entry point of program
 *
 * Return: Always 0 (Success)
 *
 * Description: This program prints the lowercase and uppercase of alphabets
 * using while loop and using putchar 3 times
 */
int main(void)
{
	/* Declaring and initializing variable */
	char c = 'a';

	while (c <= 'z')
	{
		putchar (c);
		c++;
	}

	c = 'A';

	while (c <= 'Z')
	{
		putchar (c);
		c++;
	}

	putchar('\n');
	return (0);
}
