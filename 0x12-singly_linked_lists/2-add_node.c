#include "lists.h"

/**
 * add_node - Function that adds a new node at the beginning of list.
 * @head: Pointer to singly linked list.
 * @str: Pointer to signly linked list.
 *
 * Return: The address of the new element or NULL if it failed.
 *
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t length = 0;

	new_node = malloc(sizeof(*new_node));
	/* If new_mode fails return NULL */
	if (new_node == NULL)
		return (NULL);
	/* Loop to find length */
	while (str[length])
		length++;
	/* Access length of new_node and assign it to length */
	new_node->len = length;
	/* Access list of new_node and duplicate it */
	new_node->str = strdup(str);
	/* Access next node of new_node and assign it as first node */
	new_node->next = *head;
	/* Make it the beginning of the list */
	*head = new_node;
	/* Return it */
	return (new_node);
}
