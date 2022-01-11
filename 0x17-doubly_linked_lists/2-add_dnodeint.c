#include "lists.h"
/**
 * add_dnodeint - put a node at start
 * @head: p to header
 * @n: the quantity of nodes
 * Return: 0
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *i;

i = malloc(sizeof(dlistint_t));
if (i == NULL)
{
return (NULL);
}
i->n = n;
i->next = (*head);
i->prev = NULL;
if ((*head) != NULL)
{
(*head)->prev = i;
}
(*head) = i;
return (i);
}
