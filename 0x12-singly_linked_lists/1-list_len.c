#include "lists.h"

/**
 * list_len - Function that returns the number of elements in a linked list.
 * @h: Pointer to singlt link list.
 *
 * Return: Number of elements.
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
