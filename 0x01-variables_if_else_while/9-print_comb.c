#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point to the program
 *
 * Return: Always return 0 (Success)
 *
 * Description: A program that prints all possible combinations of single
 * digit numbers
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(48 + n);
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}

	putchar('\n');
	return (0);
}
