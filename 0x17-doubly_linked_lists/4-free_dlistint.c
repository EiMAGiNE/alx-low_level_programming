#include "lists.h"

/**
 * free_dlistint - frees list
 * @head: parameter for head pointer
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	while (current != NULL)
	{
		dlistint_t *next = current->next;

		free(current);
		current = next;
	}
}
