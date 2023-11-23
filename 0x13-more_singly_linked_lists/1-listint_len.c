#include "lists.h"

/**
 * listint_len - Counts the number of nodes in a linked list
 * @h: head of the list
 *
 * Return: The number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *c = h;
	size_t i = 0;

	while (c != NULL)
	{
		i += 1;
		c = c->next;
	}
	return (i);
}
