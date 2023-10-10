#include <stdio.h>

/**
 * main - Entry point of program
 *
 * Return: Always 0 (Succes)
 *
 * Description: This program prints single digits numbers of base 10
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(48 + n);
		n++;
	}

	putchar('\n');
	return (0);
}
