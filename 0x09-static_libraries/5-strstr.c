#include "main.h"
#include <stdio.h>

/**
 * _strstr - Locates a substring
 *
 * @haystack: String to search in
 * @needle: Substring to look for
 *
 * Return: The pointer to the beginning of the located substring
 * or NULL if no such substring exist
 */
char *_strstr(char *haystack, char *needle)
{
	/* Declaration */
	int i;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}

		if (!needle[j])
			return (&haystack[i]);
	}

	return (NULL);
}
