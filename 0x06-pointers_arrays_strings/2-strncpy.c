#include "main.h"

/**
 * _strncpy - Copies a string
 *
 * @dest: Destination of the string
 * @src: Source of string
 * @n: Number of bytes to copy
 *
 * Return: Returns a pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	/* Declaration */
	int i;

	/* Initialization */
	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
