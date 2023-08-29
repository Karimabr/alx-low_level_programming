#include "lists.h"

/**
 * sum_listint - Calculates the sum of data in listint_t list.
 *
 * @head: pointer to the head of a listint_t list.
 *
 * Return: If the list is empty - input 0.
 *	If not - the sum of all data.
 */


int sum_listint(listint_t *head)

{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
