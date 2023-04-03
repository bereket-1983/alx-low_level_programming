#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - a function prints the elements list
 * @head: a pointer to struc
 *
 * Return: The number of nodes and Exits with 98 on failure
 *
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *one = head, *two = head;
	size_t node = 0;
	int is_loop = 0;

	while (one && two && two->next)
	{
		if (!(two->next->next))
			break;
		one = one->next;
		two = two->next->next;
		if (two == one)
		{
			one = one->next;
			is_loop = 1;
			break;
		}
	}
	if (!is_loop)
	{
		while (head)
		{
			node++;
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		return (node);
	}
	while (head)
	{
		node++;
		if (head == one)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			printf("-> [%p] %d\n", (void *)head, head->next->n);
			exit(98);
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	return (0);
}
