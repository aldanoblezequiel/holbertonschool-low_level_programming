#include "lists.h"
/**
 * print_listint - prints the list
 * @h: struct
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int counter = 0;

	while (h)
	{
		counter++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (counter);
}
