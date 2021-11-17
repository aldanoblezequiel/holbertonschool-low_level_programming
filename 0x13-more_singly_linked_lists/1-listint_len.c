#include "lists.h"
/**
 * listint_len - returns the cant elements in the linked list.
 * @h: header
 * Return: size_t type
 */
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
