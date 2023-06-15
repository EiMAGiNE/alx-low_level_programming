#include "lists.h"

/**
 * sum_dlistint - returns sum of all data
 * @head: parameter for head node
 *
 * Return: sum of all data of linked list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
