#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of the list
 * @head: parameter for pointer to the head node
 * @index: parameter for index of the node
 *
 * Return: pointer of index, or NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
		head = head->next;
	{
		if (head == NULL)
			return (NULL);

		else
			return (head);
	}
}
