#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - function gives  number of elements in a linked list.
 *
 * list_t list
 * @h: header pointer to the list.
 * Return: The number of the elements.
 *
 */

size_t list_len(const list_t *h)

{
	size_t cont = 0;

	while (h != NULL)
	{
		h = h->next;
		cont++;
	}
	return (cont);

}
