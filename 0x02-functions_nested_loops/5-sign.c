#include "main.h"

/**
 * print_sign - Prints the sign of a number
 *
 * @n: The number it should check for
 *
 * Return: Return 1 if n is greater than zero, return 0 if n is zero
 *         or return -1 if n is less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
