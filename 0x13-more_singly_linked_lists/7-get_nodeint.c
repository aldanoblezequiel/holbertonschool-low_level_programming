#include "lists.h"
/**
 * get_nodeint_at_index - Return node
 * @head: header
 * @index: number of the node
 * Return: head
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	if (head)
	for (n = 0; n < index; n++)
	{
		if (head->next)
			head = head->next;
		else
			return (NULL);
	}

	return (head);
}
