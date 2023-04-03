#include "lists.h"

/**
 * free_listint2 - a funcation that free nodes, list and set head to null
 * @head: struct
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	temp = *head;
	while (*head)
	{
		temp = *head;
		free(temp);
		(*head) = (*head)->next;
	}

	(*head) = NULL;
}
