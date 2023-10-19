#include "main.h"

/**
 * reverse_array - Reverses an array of integers
 *
 * @a: Array to be reversed
 * @n: Number of elements in the array
 *
 * Return: Returns nothing
 */
void reverse_array(int *a, int n)
{
	/* Declarations */
	int i;
	int j;
	int tmp;

	/* Initialization */
	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j--] = tmp;
	}
}
