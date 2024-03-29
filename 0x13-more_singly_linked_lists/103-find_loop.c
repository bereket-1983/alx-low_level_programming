#include "lists.h"

/**
 * find_listint_loop - a function that finds the loop
 * @head: a pointer to lsit sturcture
 *
 * Return: the address of the node where the loop start or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *one = head, *two = head;

	while (one && two && two->next)
	{
		one = one->next;
		two = two->next;
		if (one == two)
		{
			return (one);
		}
	}
	return (NULL);
}
