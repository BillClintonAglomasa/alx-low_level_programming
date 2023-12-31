#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Returns a pointer to a newly allocated space in memory that
 * concatenates two strings.
 *
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: Returns a pointer to the concatenated strings s1 and s2.
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int length = 0, j = 0;
	char *concat_array;

	/* Return empty string if string is NULL */
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";


	/* Getting the total length of str1 and str2 */
	for (i = 0; s1[i] || s2[i]; i++)
	{
		length++;
	}

	/* Creating dynamic allocaton */
	concat_array = malloc(sizeof(*concat_array) * (length + 1));

	/* Checking if cpy_array is null and returning NULL */
	if (concat_array == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
	{
		concat_array[j++] = s1[i];
	}

	for (i = 0; s2[i]; i++)
	{
		concat_array[j++] = s2[i];
	}

	concat_array[length] = '\0';

	return (concat_array);
}
