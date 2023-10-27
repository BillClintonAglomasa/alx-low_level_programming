#include "main.h"
#include <stdio.h>

int check_palindrome(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * _is_palindrome - Checks whetther the string is a palindrome.
 *
 * @s: The strin to reverse.
 *
 * Return: 1 if n is a prime, 0 if it is not so.
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}

	else
	{
		return (check_palindrome(s, 0, _strlen_recursion(s)));
	 }
}

/**
 * _strlen_recursion - Returns the length of a string.
 *
 * @s: The string to calculate its length.
 *
 * Return: Length of string.
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

/**
 * check_palindrome - Checks the string recursively.
 *
 * @s: The string to calculate its length.
 * @i: Iterator
 * @len: Length of string
 *
 * Return: Return 1 if palindrome, 0 if not.
 */
int (char *s)
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
