#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
  * add_node - adds a new head node
  * @head: pointer
  * @str: string
  * Return: the new list
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *p;

	p = malloc(sizeof(list_t));
	if (!p)
		return (NULL);
	p->str = strdup(str);
	p->len = strlen(str);
	p->next = *head;
	*head = p;
	return (*head);
}
