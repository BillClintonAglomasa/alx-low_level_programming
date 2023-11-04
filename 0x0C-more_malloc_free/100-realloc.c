#include "main.h"

/**
 * _realloc - Reallocats a memory block using malloc and free.
 *
 * @ptr: Pointer to the memory block allocated previously.
 * @old_size: The size allocated for ptr in bytes
 * @new_size: The new size of the new memory block in bytes.
 *
 * Return: Returns a pointer to the newly created array else NULL.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i, n = new_size;
	char *p;
	char *oldptr = ptr;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}

	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	else if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);

	if (p == NULL)
		return (NULL);

	if (new_size > old_size)
		n = old_size;

	for (i = 0; i < n; i++)
		p[i] = oldptr[i];

	free(ptr);

	return (p);
}
