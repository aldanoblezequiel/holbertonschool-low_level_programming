#include "lists.h"

/**
 *add_dnodeint_end - Adds at end
 *@head: p a heder
 *@n: value
 * Return: 0
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *n_node;
dlistint_t *tmp;

tmp = *head;
if (!head)
return (NULL);
n_node = malloc(sizeof(dlistint_t));
if (n_node == NULL)
return (NULL);
n_node->n = n;
n_node->next = NULL;
if (*head == NULL)
{
*head = n_node;
n_node->prev = NULL;
return (n_node);
}
while (tmp->next != NULL)
tmp = tmp->next;

tmp->next = n_node;
n_node->prev = tmp;
return (n_node);
}
