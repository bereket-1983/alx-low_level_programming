#include "lists.h"

/**
 * get_nodeint_at_index - a function return nth of the node
 * @head: struc
 * @index: inex
 *
 * Return: nth or NULL if node does not exist
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);
		count++;
		head = head->next;
	}

	return (NULL);
}
