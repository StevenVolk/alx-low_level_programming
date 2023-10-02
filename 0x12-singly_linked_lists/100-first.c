#include <stdio.h>

/**
 * pre - function executes before main function
 */
void __attribute__((constructor)) pre()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
