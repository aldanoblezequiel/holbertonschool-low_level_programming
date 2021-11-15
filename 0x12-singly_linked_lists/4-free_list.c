#include "lists.h"
#include <stdlib.h>
/**
  * free_list - frees the list
  * @head: pointer
  * Return: void
  */
void free_list(list_t *head)
{
	list_t *p;

	while (head)
	{
		p = head;
		head = head->next;
		free(p->str);
		free(p);
	}
}
