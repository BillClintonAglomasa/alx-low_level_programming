#include "lists.h"

/**
 *free_listint2 - Frees a linked list
 *@head: Pointer to the head of the list
 *
 *Return: Void
 */

void free_listint2(listint_t **head)
{
	listint_t *c;
	listint_t **t = head;

	if (t != NULL)
	{
		while (*head != NULL)
		{
			c = *head;
			free(c);
			*head = (*head)->next;
		}

		*t = NULL;
	}
}
