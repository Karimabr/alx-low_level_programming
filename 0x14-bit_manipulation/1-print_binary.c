#include "main.h"

/**
 * print_binary - It Prints the binary representation of a Certain  number.
 *
 * @n: It's The Number to be printed in Binary.
 */


void print_binary(unsigned long int n)

{

	if (n > 1)
	print_binary(n >> 1);

_putchar((n & 1) + '0');

}
