#include "lists.h"

/**
 * free_listint2 - frees the list
 * @head: parameter for the head of list
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	while (*head != NULL)
	{
		current = *head;
		free(current);
	}
	*head = NULL;
}
