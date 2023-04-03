#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all data(n)
 * @head: linked list
 *
 * Return: sum of all data(n) or if the list is empty return 0
 *
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
