#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Copies the string pointed to by src including '\0'
 *
 * @dest: Pointer to the buffer in which we copy the string
 * @src: String to be copied
 *
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
