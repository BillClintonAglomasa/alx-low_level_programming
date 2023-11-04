#include "main.h"

/**
 * array_range - Creates an array of integers ordered from min to max.
 *
 * @min: Minimum value of the array
 * @max: Maximum value  of the array
 *
 * Return: Returns a pointer to the newly created array else NULL.
 */

void *array_range(int min, int max)
{
	int i, int size;
	char *str_concat;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	str_concat = malloc(sizeof(*str_concat) * size);

	if (str_concat == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		str_concat[i] = min++;

	return (str_concat);
}
