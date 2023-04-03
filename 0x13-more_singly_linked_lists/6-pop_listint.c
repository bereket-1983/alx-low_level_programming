#include "lists.h"

/**
 * pop_listint - a function delets head node and return head node data
 * @head: struc
 *
 * Return: return to head node data(n) or if empty return 0
 *
 */

int pop_listint(listint_t **head)
{
	listint_t *phead;
	int result;

	if (*head == NULL)
		return (0);

	result = (*head)->n;
	phead = *head;
	*head = (*head)->next;
	free(phead);

	return (result);
}
