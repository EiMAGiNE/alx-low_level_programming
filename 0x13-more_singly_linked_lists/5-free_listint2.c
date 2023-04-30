#include "lists.h"

/**
 * free_listint2 - frees the list
 * @head: parameter pointer to the head of list
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
	*head = NULL;
}
