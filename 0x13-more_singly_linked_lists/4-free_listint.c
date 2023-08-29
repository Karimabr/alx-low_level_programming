#include "lists.h"

/**
 * free_listint - a fu function which Frees a listint_t list.
 * eyit o jani neas
 * @head: A pointer to the head of the listint_t list to be freed.
 */

void free_listint(listint_t *head)

{
	listint_t *tmp;

	while (head)
	{
	tmp = head->next;
	free(head);
	head = tmp;
	}
}
