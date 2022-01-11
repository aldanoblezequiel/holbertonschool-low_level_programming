#include "lists.h"
/**
 * get_dnodeint_at_index - gets position
 * @head: p al nodo
 * @index: idx nodes
 * Return: Null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int posicion = 0;

	while (tmp)
	{
		if (posicion == index)
			return (tmp);
		posicion++;
		if (tmp->next)
			tmp = tmp->next;
		else
			break;
	}
	return (NULL);
}
