#include "lists.h"
/**
 *insert_nodeint_at_index - insert
 *@head: header
 *@idx: ind
 *@n: value
 *Return: pointer
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *tmp = *head;
	listint_t *node;

	if (!head)
		return (NULL);
	if (!*head && idx != 0)
		return (NULL);

	if (idx != 0)
		for (i = 0; i < (idx - 1); i++)
		{
			if ((*head)->next)
			{
				*head = (*head)->next;
			}
			else
			{
				return (NULL);
			}
		}
	node = malloc(sizeof(listint_t));
	if (!node)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
	}
	else
	{
		node->next = (*head)->next;
		(*head)->next = node;
		*head = tmp;
	}
	node->n = n;
	return (node);
}
