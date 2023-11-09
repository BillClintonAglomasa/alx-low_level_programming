#include "function_pointers.h"

/**
 * array_iterator - A function given as a parameter on each element of an array
 *
 * @array: The array to be iterated over
 * @size: Size of the array
 * @action: A pointer to the function we will use
 *
 * Return: Return Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL || action == NULL || size == 0)
		return (1);
	for (i = 0; i < size, i++)
		action(array[x]);
}
