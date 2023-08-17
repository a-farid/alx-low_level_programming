#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data DLlist
 *
 * @head: the head of the list
 * Return: the sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
	int s;

	s = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			s += head->n;
			head = head->next;
		}
	}

	return (s);
}
