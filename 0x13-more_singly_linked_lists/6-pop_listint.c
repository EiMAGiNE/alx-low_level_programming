#include "lists.h"

/**
 * pop_listint - delete head node of list
 * @head: parameter for pointer to head
 *
 * Return: the head node data, or 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);

	else
	{
		data = (*head)->n;
		temp = *head;
		*head = (*head)->next;
		free(temp);

		return (data);
	}
}
