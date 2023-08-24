#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function to free the list_t list.
 *
 * @head: list's head pointer.
 *
 * Return: nothing = success.
 *
 */

void free_list(list_t *head)

{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
