#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of program
 *
 * Return: Always 0 (Success)
 *
 * Description: Prints the alphabets from a to z
 */
int main(void)
{
	/* Declaring variable */
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
