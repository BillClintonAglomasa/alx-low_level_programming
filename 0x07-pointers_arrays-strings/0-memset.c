#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 *
 * @s: A memory area to be filled
 * @b: A char to copy
 * @n: Number of times to copy b
 *
 * Return: A pointer ot the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	/* Declaration */
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
