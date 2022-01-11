#include "lists.h"

/**
 * free_dlistint - free x
 * @head: pointter
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *tmp = head;

while (tmp != NULL)
{
tmp = head->next;
free(head);
head = tmp;
}
}
