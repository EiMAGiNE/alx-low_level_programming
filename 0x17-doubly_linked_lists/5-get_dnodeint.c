#include "lists.h"

/**
 * dlistint_t *get_dnodeint_at_index - returns the nth node
 *@head: parameter for head
 *@index: parameter for index of node
 * Return: the nth node of linked list, or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (head != NULL && index > 0)
	{
		head = head->next;
		index--;
	}
	if (head == NULL)
		return (NULL);

	return (head);
}
