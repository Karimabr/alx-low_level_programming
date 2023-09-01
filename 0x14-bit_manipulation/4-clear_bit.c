#include "main.h"

/**
 * clear_bit - It Sets the value of a bit at a given index to 0.
 *
 * @n: Pointer to the bit.
 *
 * @index: The index to set the value at (start at 0).
 *
 * Return: fail = -1. success = 1.
 */

int clear_bit(unsigned long int *n, unsigned int index)

{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
