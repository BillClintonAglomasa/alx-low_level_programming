#include "main.h"
#include <stdio.h>

/**
 * factorial - Returns the factorial of a given number.
 *
 * @n: A number whose factorial will be returned,.
 *
 * Return: The length of the string.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
