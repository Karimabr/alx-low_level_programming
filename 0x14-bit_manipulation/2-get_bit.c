#include "main.h"

/**
 * get_bit - It Gets the value of a bit at a certain index.
 *
 * @n: It's The Bit.
 *
 * @index: Is The index to get the value at (start at 0).
 *
 * Return: If fail, -1, if success - the value of bit at index.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
