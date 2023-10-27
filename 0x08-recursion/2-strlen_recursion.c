#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Prints a string in reverse.
 *
 * @s: A string, whose lenght is to be calculated.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
