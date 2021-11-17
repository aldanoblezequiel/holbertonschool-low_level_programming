#include "lists.h"
/**
 * add_nodeint_end - adds a node at the end of the list
 * @head: header
 * @n: node
 * Return: node memory
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *head_aux = *head;
	listint_t *node = malloc(sizeof(listint_t));

	if (!node)
		return (NULL);
	node->n = n;
	node->next = NULL;

	while (head_aux)
	{
		if (head_aux->next)
		{
			head_aux = head_aux->next;
		}
		else
		{
			head_aux->next = node;
			return (node);
		}
	}

	*head = node;
	return (node);
}
