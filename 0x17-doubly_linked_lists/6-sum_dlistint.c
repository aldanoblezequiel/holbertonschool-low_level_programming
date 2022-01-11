#include "lists.h"
/**
 * sum_dlistint - suma de values
 * @head: p a nodo
 * Return: 0
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	int add = 0;

	if (!head)
		return (0);
	while (tmp)
	{
		add = tmp->n + add;
		tmp = tmp->next;
	}
	return (add);
}
