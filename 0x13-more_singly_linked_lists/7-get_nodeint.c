#include "lists.h"

/**
 * get_nodeint_at_index - Deletes the head node of a listint_t list.
 * @head: Pointer to the address of the
 *        head of the listint_t list.
 * @index: index of Head of list.
 * Return: If the linked list is empty.
 *         If not - input the head node's data.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
