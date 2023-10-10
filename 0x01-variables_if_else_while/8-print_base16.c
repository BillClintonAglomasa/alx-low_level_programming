#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point of program
 *
 * Return: Always return 0 (Success)
 *
 * Description: A program that prints out the numbers of base16 in lowercase
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
		putchar(c);

	for (c = 'a'; c <= 'f'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}
