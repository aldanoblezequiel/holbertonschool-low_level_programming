#include "lists.h"
/**
 * add_nodeint - Adds a node at the start of a list
 * @head: header
 * @n: node value
 * Return: node memory
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (!node)
		return (NULL);

	node->n = n;
	node->next = *head;

	*head = node;
	return (node);
}
