#include <stdio.h>

void __attribute__((constructor)) print_msg(void);

/**
 * print_msg - Prints a msg  before main function is executed.
 */

void print_msg(void)

{
printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}
