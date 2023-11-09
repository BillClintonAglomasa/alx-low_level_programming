#include "function_pointers.h"
#include <stlib.h>

/**
 * int_index - Function searches for an integer
 *
 * @array: The array to be iterated over
 * @size: Size of the array
 * @action: A pointer to a function
 *
 * Return: Return -1 if size <=0 or elem .
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size < 1)
		return (-1);
	for (i = 0; i < size, i++)
	{
		if (cmp (*(array + x)))
			return (x);
	}
	return (-1);
}
