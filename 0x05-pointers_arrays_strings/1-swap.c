#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: pointer to first value
 * @b: pointer to second values
 * Return: Returns no value
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
