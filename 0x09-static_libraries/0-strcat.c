#include "main.h"

/**
 * _strcat - Concatenates two strings
 *
 * @dest: A string to append to
 *
 * @src: A string to add
 *
 * Return: A pointer that returns the resulting string
 */
char *_strcat(char *dest, char *src)
{
	/* Declaration */
	int i;
	int j;

	/* Initialization */
	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
