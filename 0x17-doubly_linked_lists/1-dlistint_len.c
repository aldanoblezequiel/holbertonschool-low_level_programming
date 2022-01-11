#include "lists.h"

/**
 * dlistint_len - list large
 * @h: header
 * Return: 0
 */
size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *i = h;
size_t node = 0;

for (; i != NULL; i = i->next)
{
node++;
}
return (node);
}
