#include "lists.h"
/**
 * insert_dnodeint_at_index - inserta nodo en el indice pa
 * @h: p a nodo
 * @idx: indice xd
 * @n: data intero
 * Return: Null
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp = (*h), *aux;
	unsigned int posicion = 0;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (idx == 0)
		return (add_dnodeint(h, n));
	while (tmp)
	{
		if (posicion == idx - 1 && tmp->next == NULL)
			return (add_dnodeint_end(h, n));
		if (posicion == idx - 1)
		{
			aux = tmp->next;
			tmp->next = new;
			aux->prev = new;
			new->next = aux;
			new->prev = tmp;
			return (new);
		}
		tmp = tmp->next;
		posicion++;
	}
	return (NULL);
}
