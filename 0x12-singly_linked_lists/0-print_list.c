#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
  * print_list - prints a whole list
  * @h: var pointer
  * Return: nodes
  */
size_t print_list(const list_t *h)
{
	size_t counter;

	counter = 0;
	while (h)
	{
		if (h->str == NULL)
		{
			printf("[%d] (nil)\n", 0);
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		counter++;
	}
	return (counter);
}
