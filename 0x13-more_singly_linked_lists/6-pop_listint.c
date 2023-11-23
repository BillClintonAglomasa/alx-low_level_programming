#include "lists.h"

/**
 *pop_listint - Deletes the head node of a linked list
 *@head: Head of the list
 *
 *Return: The deleted node data
 */

int pop_listint(listint_t **head)
{
	/* p represents the popped item, c the content */
	listint_t *p;
	int c;

	if (*head == NULL)
		return (0);

	p = *head;
	c = p->n;
	free(p);

	*head = (*head)->next;
	return (c);
}
