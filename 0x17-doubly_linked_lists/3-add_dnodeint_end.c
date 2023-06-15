#include "lists.h"

/**
 * dlistint_t *add_dnodeint_end - adss a new node at end of list
 * @head: parameter of pointer for head node
 * @n: parameter for added new node
 *
 * Return: address of new element, or NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		dlistint_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		new_node->prev = current;
		current->next = new_node;
	}

	return (new_node);
}
