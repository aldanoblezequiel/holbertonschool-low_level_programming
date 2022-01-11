#include "lists.h"
/**
 * print_dlistint - prints the list
 * @h: list start
 * Return: 0
 */

size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *i = h;
size_t node = 0;

for (; i != NULL; i = i->next)
{
printf("%d\n", i->n);
node++;
}
return (node);
}
