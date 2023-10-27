#include "main.h"

/**
 * _strcmp - Compares two strings
 *
 * @s1: First string to compare
 * @s2: Second string to compare
 *
 * Return: Once s1 == s2, it will return zero if s1 == '\0' or it will return
 * the difference between s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (0);

		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
