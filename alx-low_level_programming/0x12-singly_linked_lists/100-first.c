#include <stdio.h>

void run_first(void) __attribute__((constructor));

/**
 * run_first - prints a string literal before main() is executed
 */
void run_first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
