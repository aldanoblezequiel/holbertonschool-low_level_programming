#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
  * list_len - counts elements of list
  * @h: the list
  * Return: elements in the linked list
  */
size_t list_len(const list_t *h)
{
	size_t counter;

	counter = 0;
	while (h)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
