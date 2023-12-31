#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index
 *
 * @n: The number
 * @index: Index staring from 0 of the bit required
 *
 * Return: the converted value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}
