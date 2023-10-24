#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix of
 * integers
 *
 * @a: Square matrix of which the sum of diagonals is printed
 * @size: Size of the matrix
 *
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	/* Declaration */
	int i;
	unsigned int sum;
	unsigned int sum1;

	/* Initialization */
	sum = 0;
	sum1 = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[(size * i) + i];
		sum1 += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", sum, sum1);
}
