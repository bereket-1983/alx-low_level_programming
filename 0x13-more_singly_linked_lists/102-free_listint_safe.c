#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint_safe - a function that frees list loops
 * @head: a pointer list struc
 *
 * Return: the size of the list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t counter = 0;

	listint_t *temp;

	temp = *h;
	while (temp)
	{
		temp = *h;
		temp = temp->next;
		free_listint(temp);
		counter++;
	}
	*h = NULL;

	return (counter);
}

/**
 * free_list - a function frees a listint recursively
 * @head: a pointer to list struc
 *
 * Return: nothing
 */

void free_list(listint_t *head)
{
	listint_t *temp;

	if (head)
	{
		temp = head;
		temp = temp->next;
		free(temp);
		free_list(temp);
	}
	free(head);
}
