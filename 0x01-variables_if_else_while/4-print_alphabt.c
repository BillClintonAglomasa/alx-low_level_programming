#include <stdio.h>

/**
 * main - Entry point of program
 *
 * Return: Always 0 (Success)
 *
 * Description: This program prints the alphabet in lowercase except q and e
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}

	putchar('\n');
	return (0);
}
