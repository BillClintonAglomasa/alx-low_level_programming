#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 *
 * @x: The number on which y will be raised to.
 * @y: The power which x will be raised to.
 *
 * Return: The value of x raised to power y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
