#include "lists.h"

/**
 * dlistint_len -  Return length
 * @h: Ptr
 * Return: n var
 */

size_t dlistint_len(const dlistint_t *h)
{
	unsigned int n = 0;

	if (!h)
		return (0);
	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);

}

/**
 * delete_dnodeint_at_index - Deelte idx
 * @head: Ptr
 * @index: index xd
 * Return: the node
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *recorre = *head;
	unsigned int largo = dlistint_len(recorre);

	if (!head || !*head || index >= largo)
		return (-1);
	while (index--)
	{
		recorre = recorre->next;
	}
	if (recorre->prev)
		recorre->prev->next = recorre->next;
	if (recorre->next)
		recorre->next->prev = recorre->prev;
	if (recorre == *head)
		*head = recorre->next;
	free(recorre);
	return (1);
}
