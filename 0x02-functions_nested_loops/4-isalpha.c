#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 *
 * @c: The character to check
 *
 * Return: Always return 0 (Success)
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
