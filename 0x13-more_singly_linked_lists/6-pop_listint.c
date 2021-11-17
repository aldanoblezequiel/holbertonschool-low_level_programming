#include "lists.h"
/**
 *pop_listint - Errase the head
 *@head: head
 *Return: Value of the node
 */
int pop_listint(listint_t **head)
{
	listint_t *aux;
	int n = 0;

	if (*head)
	{
		aux = *head;
		n = (*head)->n;
		*head = aux->next;
		free(aux);
	}

	return (n);
}
