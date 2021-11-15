#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * add_node_end - adds a tail node
  * @head: pointer
  * @str: string
  * Return: pointer2
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *p, *p2;

	p = malloc(sizeof(list_t));
	if (!p)
		return (NULL);
	p->str = strdup(str);
	p->len = strlen(str);
	p->next = NULL;
	if (!(*head))
	{
		*head = p;
		return (p);
	}
	p2 = *head;
	while (p2->next != NULL)
		p2 = p2->next;
	p2->next = p;
	return (p);
}
