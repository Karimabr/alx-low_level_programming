#include "main.h"

/**
 * binary_to_uint - Fu to convert binary number to unsigned int.
 * @k: Pointer to String.
 * Return: If b is NULL or contains chars - 0. if no - Converted number.
 */

unsigned int binary_to_uint(const char *k)
{
	int i;
	unsigned int dec_val = 0;

	if (!k)
		return (0);

	for (i = 0; k[i]; i++)
	{
		if (k[i] < '0' || k[i] > '1')
			return (0);
		dec_val = 2 * dec_val + (k[i] - '0');
	}
	return (dec_val);
}
