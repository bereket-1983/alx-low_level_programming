#include "lists.h"

/**
 * free_listint - a function free and node list
 * @head: a pointer to struct
 *
 * Return: nothing
 *
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
