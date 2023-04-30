#include "lists.h"

/**
 * free_listint - frees the list
 * @head: parameter for head of list
 */
void free_listint(listint_t *head)
{
	listint_t *current_node;

	while (head != NULL)
	{
		current_node = head;
		head = head->next;
		free(current_node);
	}
}
