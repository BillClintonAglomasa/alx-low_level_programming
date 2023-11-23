#include "lists.h"

/**
 * free_listint - Frees a linked list
 * @head: Head of the list
 *
 * Return: Void
 */
void free_listint(listint_t *head)
{
	listint_t *t;

	while (head != NULL)
	{
		t = head;
		head = head->next;
		free(t);
	}
}
