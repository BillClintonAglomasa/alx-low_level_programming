#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of chars, and initializes it with a specific
 * char.
 *
 * @size: The length of the array
 * @c: The char to initialize the array with.
 *
 * Return: Returns a pointer ot the array or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *m;

	if (size ==  0)
		return (NULL);

	m = malloc(sizeof(*m) * size);

	if (m == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		m[i] = c;
	}

	return (m);
}
