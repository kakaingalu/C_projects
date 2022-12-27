#include <stdio.h>

/*void __attribute__((constructor));*/
/**
 * first - executes before main
 *
 * return: void
 */
void __attribute__((constructor)) first()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
