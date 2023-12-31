#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes
 *
 * @s: String to search
 * @accept: String containing the byte in s to look for
 *
 * Return: The pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte exist
 */
char *_strpbrk(char *s, char *accept)
{
	/* Declaration */
	int i;
	int j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}

		s++;
	}

	return (NULL);
}
