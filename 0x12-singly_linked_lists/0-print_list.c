#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
 * print_list - This is a function to print all elements of a list_t list.
 * @h: Pointer to list's header.
 *
 * Return: number of nodes in the list.
 */

size_t print_list(const list_t *h)

{
	size_t cont = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			cont++;
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
			cont++;
		}
	}
	return (cont);
}
