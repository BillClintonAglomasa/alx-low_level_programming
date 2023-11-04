#include "main.h"

/**
 * malloc_checked - Allocates memnory using malloc
 * char.
 *
 * @b: The memory to allocate
 *
 * Return: Returns a void  pointer.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr ==  NULL)
		exit(98);

	return (ptr);
}
