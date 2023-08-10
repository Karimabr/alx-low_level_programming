#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - A function to  allocat  memory using malloc.
 * @b: integer variable dat holds the memory size
 * Author: karimabr
 * Return: 0 = successful
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
