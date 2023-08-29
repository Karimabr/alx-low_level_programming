#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list.
 * @head: Pointer to the address of
 *        listint_t list's head.
 *
 * Return: If the linked list is empty
 *         If not - return the head node's data.
 */

int pop_listint(listint_t **head)

{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (ret);
}
