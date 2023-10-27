#include "main.h"

/**
 * _memcpy - Copies memory area
 *
 * @dest: Destination memory area
 * @src: Memory area to copy from
 * @n: Number of byes to copy
 *
 * Return: A pointer that returns the resulting string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	/* Declaration */
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
