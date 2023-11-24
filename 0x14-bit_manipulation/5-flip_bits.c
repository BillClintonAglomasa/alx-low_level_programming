#include "main.h"

/**
 * flip_bits - Gets the number of bits to flip to get from n to m
 * @n: Initial number
 * @m: Final number
 *
 * Return: The number of flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = n ^ m;
	int i = 0;

	while (flip)
	{
		if (flip & 1)
			i++;
		flip  >>= 1;
	}
	return (i);
}
