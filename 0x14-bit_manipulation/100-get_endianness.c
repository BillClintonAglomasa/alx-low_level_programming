#include "main.h"

/**
 * get_endianness - Checks whether a machine is big endian or little
 *
 * Return: 1 if little endian, 0 otherwise
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *endian = (char *)&i;

	if (*endian)
		return (1);
	return (0);
}
