#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Checks fora digit (0 to 9)
 *
 * @c: Int to be checked
 *
 * Return: 1 if c is a digit, otherwise 0.
 */
int _isdigit(int c)
{
	return (c>= '0' && c <= '9');
}
