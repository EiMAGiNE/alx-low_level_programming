#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of the list
 * @head: parameter for pointer to head node
 *
 * Return: the sum, or NULL if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
