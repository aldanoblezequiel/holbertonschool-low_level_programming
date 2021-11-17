#include "lists.h"
/**
 * free_listint2 - Frees a list x2
 * @head: header
 */
void free_listint2(listint_t **head)
{
	if (head)
	{
		listint_t *aux = *head;

		while (*head)
		{
			*head = (*head)->next;
			free(aux);
			aux = *head;
		}
	}
}
