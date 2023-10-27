#include "main.h"
#include <stdio.h>

int base_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - Returns the natural square root of a number.
 *
 * @n: The number to find its natural square root.
 *
 * Return: The value of the natural square root of a number.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else
	{
		return (base_sqrt_recursion(n, 0));
	 }
}

/**
 * base_sqrt_recursion - Recurses to find the natural square root of a number.
 *
 * @n: The number to calculate square root.
 * @i: The iterator in the recursive function
 *
 * Return: The value of the natural square root of a number.
 */
int base_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}

	else if (i * i ==)
	{
		return (1);
	}
	else
	{
		return (base_sqrt_recursion(n, 1 + 1));
	}
}
