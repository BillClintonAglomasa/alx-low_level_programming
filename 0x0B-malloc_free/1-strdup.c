#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory.
 *
 * @str: The given string.
 *
 * Return: Returns a pointer to a copied str or NULL if it fails.
 */

char *_strdup(char *str)
{
	int i;
	int length = 0;
	char *cpy_array;

	/* returns NULL if str = NULL */
	if (str ==  NULL)
		return (NULL);

	/* Getting length of str */
	for (i = 0; str[i]; i++)
	{
		length++;
	}

	/* Creating dynamic allocaton */
	cpy_array = malloc(sizeof(*cpy_array) * (length + 1));

	/* Checking if cpy_array is null and returning NULL */
	if (cpy_array == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		cpy_array[i] = str[i];
	}

	cpy_array[length] = '\0';

	return (cpy_array);
}
