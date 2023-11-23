#include "lists.h"

/**
 * sum_listint - Sums up all the data in a linked list
 * @head: Head of the list
 *
 * Return: Sum of the number
 */
int sum_listint(listint_t *head)
{
	listint_t *c = head;
	size_t sum = 0;

	while (c != NULL)
	{
		sum += c->n;
		c = c->next;
	}
	return (sum);
}
