#include "lists.h"
/**
 * sum_listint - addd the whole list
 * @head: header
 * Return:the rest
 */
int sum_listint(listint_t *head)
{
	int counter = 0;
if (!head)
	return (0);
while (head)
{
	counter += head->n;
	head = head->next;
}
return (counter);
}
