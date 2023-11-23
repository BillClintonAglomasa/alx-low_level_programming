#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a linked list
 * @head: pointer to the head of the list
 * @index: index of the node required
 *
 * Return: The address of the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *c = NULL;
	unsigned int d = 0;

	while (head != NULL)
	{
		if (d <= index)
		{
			if (d == index)
			{
				c = head;
				break;
			}
			head = head->next;
			d++;
		}
		else
			return (NULL);
	}
	return (c);
}
