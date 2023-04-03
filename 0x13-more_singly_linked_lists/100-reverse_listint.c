#include "lists.h"

/**
 * reverse_listint - a function reverses a linked list
 * @head: input a single linked list
 *
 * Return: pointer to the first node of the reversed list
 *
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = NULL;

	if (*head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	while (*head != NULL)
	{
		listint_t *next;

		next = (*head)->next;
		(*head)->next = current;
		current = *head;
		*head = next;
	}
	*head = current;
	return (*head);
}
