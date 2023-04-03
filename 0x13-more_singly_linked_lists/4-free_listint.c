#include "lists.h"

/**
 * free_listint - a function free and node list
 * @head: struct value
 *
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
	{
		return;
	}

	while (head != NULL)
	{
		listint_t *tmp;

		tmp = head;
		free(tmp);
		head = head->next;
	}
}
