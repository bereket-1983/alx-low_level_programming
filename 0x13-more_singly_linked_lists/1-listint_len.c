#include "lists.h"

/**
 * listint_len - function that return the number of elements in a linked
 * @h: value
 *
 * Return: Always 0 (success)
 *
 */

size_t listint_len(const listint_t *h)
{
	int node;

	node = 0;
	while (h != NULL)
	{
		h = h->next;
		node++;
	}
	return (node);
}
