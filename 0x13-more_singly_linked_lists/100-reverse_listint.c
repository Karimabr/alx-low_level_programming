#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: head of a list.
 * Return: Pointer to 1st node.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *k;
	listint_t *n;

	k = NULL;
	n = NULL;

	while (*head != NULL)
	{
		n = (*head)->next;
		(*head)->next = k;
		k = *head;
		*head = n;
	}

	*head = k;
	return (*head);
}
