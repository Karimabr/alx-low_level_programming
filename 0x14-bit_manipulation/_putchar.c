#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @h: The character that will be print printed.
 * Return: success = 1. fail - return = -1.and set errno appropriately.
 */

int _putchar(char h)
{
	return (write(1, &h, 1));
}
