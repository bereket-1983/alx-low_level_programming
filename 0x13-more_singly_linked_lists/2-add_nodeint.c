#include "lists.h"

/**
 * add_nodeint - a function that add a new node at the begining of a list
 * @head: value pointer to pointer
 * @n: value
 *
 * Return: pointer to the head of the linked list or NULL if it is failed
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *) malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}

